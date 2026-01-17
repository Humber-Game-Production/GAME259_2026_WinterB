#include "USDLJoystickSubsystem.h"
#include "SDL3Integration.h"

#include "SDL3/SDL.h"
#include <SDL3/SDL_joystick.h>

#include "USDL3Log.h"




void USDLJoystickSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    if (SDL_Init(SDL_INIT_JOYSTICK | SDL_INIT_GAMEPAD | SDL_INIT_EVENTS | SDL_INIT_HAPTIC) == true)
    {
        OpenJoysticks();
        SDL_SetJoystickEventsEnabled(true);
        /*if (SDL_AddEventWatch(SDLEventWatchCallback, this) == false) {
            UE_LOG(LogSDL3, Error, TEXT("Could not add event watch!: %s"), UTF8_TO_TCHAR(SDL_GetError()));
        }
        else {
            UE_LOG(LogSDL3, Log, TEXT("Event watch added!"));
        }*/
        UE_LOG(LogSDL3, Log, TEXT("SDL Joystick subsystem initialized"));
    }
    else
    {

        UE_LOG(LogSDL3, Error, TEXT("Subsystem, SDL Init failed: %s"), UTF8_TO_TCHAR(SDL_GetError()));
    }



    TickHandle = FTSTicker::GetCoreTicker().AddTicker(
        FTickerDelegate::CreateUObject(this, &USDLJoystickSubsystem::Tick), 0.0f);
    



}

bool USDLJoystickSubsystem::Tick(float DeltaTime)
{
    SDL_PumpEvents();
    SDL_Event Event;
  
    while (SDL_PollEvent(&Event))
    {
        HandleSDLEvent(&Event);
  

    }

    return true; // keep ticking
}





void USDLJoystickSubsystem::Deinitialize()
{
   // SDL_RemoveEventWatch(SDLEventWatchCallback, this);
    SDL_QuitSubSystem(SDL_INIT_JOYSTICK | SDL_INIT_GAMEPAD);
    CloseJoysticks();
    FTSTicker::GetCoreTicker().RemoveTicker(TickHandle);

    Super::Deinitialize();
}

void USDLJoystickSubsystem::OpenJoysticks()
{
    int Count = 0;
    SDL_JoystickID* Joysticks = SDL_GetJoysticks(&Count);

    if (Joysticks && Count > 0)
    {
        UE_LOG(LogSDL3, Log, TEXT("Number of joysticks detected: %d"), Count);

        for (int i = 0; i < Count; ++i)
        {
            SDL_Joystick* Joystick = SDL_OpenJoystick(Joysticks[i]);
            if (Joystick)
            {
                OpenedJoysticks.Add(Joystick);
             
                const char* Name = SDL_GetJoystickName(Joystick);
                UE_LOG(LogSDL3, Log, TEXT("Joystick %d (ID %d): %s"),
                    i,
                    Joysticks[i],
                    UTF8_TO_TCHAR(Name ? Name : "<unnamed>"));

              // HapticTest(Joystick);

            }
            else
            {
                UE_LOG(LogSDL3, Warning, TEXT("Failed to open joystick %d (ID %d)"), i, Joysticks[i]);
            }
        }
    }
}

void USDLJoystickSubsystem::HapticTest(SDL_Joystick* joystick) {
        SDL_Haptic* haptic = SDL_OpenHapticFromJoystick(joystick);
        if (haptic)
        {
            unsigned int features = SDL_GetHapticFeatures(haptic);
            UE_LOG(LogSDL3, Log, TEXT("Haptic features bitmask: %u"), features);

            if (features & SDL_HAPTIC_CONSTANT) UE_LOG(LogSDL3, Log, TEXT("Supports constant force"));
            if (features & SDL_HAPTIC_SINE)     UE_LOG(LogSDL3, Log, TEXT("Supports sine wave"));
            if (features & SDL_HAPTIC_SPRING)   UE_LOG(LogSDL3, Log, TEXT("Supports spring"));
            if (features & SDL_HAPTIC_DAMPER)   UE_LOG(LogSDL3, Log, TEXT("Supports damper"));
            if (features & SDL_HAPTIC_FRICTION) UE_LOG(LogSDL3, Log, TEXT("Supports friction"));
            if (features & SDL_HAPTIC_INERTIA)  UE_LOG(LogSDL3, Log, TEXT("Supports inertia"));
        }
        else
        {
            UE_LOG(LogSDL3, Warning, TEXT("No haptic"));
        }

        if (!haptic)
        {
            UE_LOG(LogSDL3, Error, TEXT("No haptic device: %s"), UTF8_TO_TCHAR(SDL_GetError()));
            return;
        }

        unsigned int features = SDL_GetHapticFeatures(haptic);
        UE_LOG(LogSDL3, Log, TEXT("Haptic features bitmask: %u"), features);

        // Helper lambda to try an effect
        auto tryEffect = [&](SDL_HapticEffect& effect, const char* name, int durationMs)
            {
                int id = SDL_CreateHapticEffect(haptic, &effect);
                if (id < 0)
                {
                    UE_LOG(LogSDL3, Error, TEXT("%s FAILED: %s"), UTF8_TO_TCHAR(name), UTF8_TO_TCHAR(SDL_GetError()));
                    return false;
                }

                UE_LOG(LogSDL3, Log, TEXT("%s OK, playing..."), UTF8_TO_TCHAR(name));
                SDL_RunHapticEffect(haptic, id, 1);
                SDL_Delay(durationMs);

                SDL_DestroyHapticEffect(haptic, id);
                return true;
            };

    if(features & SDL_HAPTIC_CONSTANT) {
        SDL_HapticEffect e{};
        e.type = SDL_HAPTIC_CONSTANT;
        e.constant.direction.type = SDL_HAPTIC_CARTESIAN;
        e.constant.direction.dir[0] = 1; // push right
        e.constant.length = 2000;
        e.constant.level = 16000;
        tryEffect(e, "Constant force", 2000);
    }
}

void USDLJoystickSubsystem::CloseJoysticks()
{
    for (SDL_Joystick* Joystick : OpenedJoysticks)
    {
        if (Joystick)
        {
            const char* Name = SDL_GetJoystickName(Joystick);
            UE_LOG(LogSDL3, Log, TEXT("Closing joystick: %s"),
                UTF8_TO_TCHAR(Name ? Name : "<unnamed>"));

            SDL_CloseJoystick(Joystick);
        }
    }

    OpenedJoysticks.Empty();

}

void USDLJoystickSubsystem::Update() const
{
    
    //SDL_Event Event;
    //

    //while (SDL_PollEvent(&Event))
    //{
    //    // The event watcher handles it
    //}
    
}

bool USDLJoystickSubsystem::HandleSDLEvent(SDL_Event* Event)
{

  

    switch (Event->type)
    {
    case SDL_EVENT_JOYSTICK_AXIS_MOTION:
        if (Event->jaxis.which ==  SDL_GetJoystickID(OpenedJoysticks[2])) {
            OnAxisMoved.Broadcast(Event->jaxis.which, Event->jaxis.axis, Event->jaxis.value);
           
        }
        //UE_LOG(LogSDL3, Log, TEXT("Joystick Axis movement detected"));
        break;

    case SDL_EVENT_JOYSTICK_BUTTON_DOWN:
        OnButtonPressed.Broadcast(Event->jbutton.which, Event->jbutton.button);
        break;

    case SDL_EVENT_JOYSTICK_BUTTON_UP:
        OnButtonReleased.Broadcast(Event->jbutton.which, Event->jbutton.button);
        break;
    }
    return true;
}

