#include "SDL3Integration.h"
#include "Modules/ModuleManager.h"

// SDL3 headers (from ThirdParty/SDL3/Include)
#include <SDL3/SDL.h>
#include "USDL3Log.h"

#define LOCTEXT_NAMESPACE "FSDL3IntegrationModule"

void FSDL3IntegrationModule::StartupModule()
{
    //if (!SDL_Init(SDL_INIT_VIDEO)) {
    //    const char* SdlError = SDL_GetError();
    //    UE_LOG(LogSDL3, Error, TEXT("Failed to initialize SDL3 Video: %s"), UTF8_TO_TCHAR(SdlError));
    //}
    //if (!SDL_Init(SDL_INIT_JOYSTICK))
    //{
    //   


    //    const char* SdlError = SDL_GetError();
    //    UE_LOG(LogSDL3, Error,
    //        TEXT("Failed to initialize SDL3 joystick subsystem: %s"),
    //        UTF8_TO_TCHAR((SdlError && *SdlError) ? SdlError : "Unknown error"));
    //}
    //else
    //{
    //    UE_LOG(LogSDL3, Log, TEXT("SDL3 joystick subsystem initialized successfully"));

    //    int Count = 0;
    //    SDL_JoystickID* Joysticks = SDL_GetJoysticks(&Count);

    //    if (Joysticks && Count > 0)
    //    {
    //        UE_LOG(LogSDL3, Log, TEXT("Number of joysticks detected: %d"), Count);

    //        for (int i = 0; i < Count; ++i)
    //        {
    //            SDL_Joystick* Joystick = SDL_OpenJoystick(Joysticks[i]);
    //            if (Joystick)
    //            {
    //                const char* Name = SDL_GetJoystickName(Joystick);
    //                UE_LOG(LogSDL3, Log, TEXT("Joystick %d (ID %d): %s"),
    //                    i,
    //                    Joysticks[i],
    //                    UTF8_TO_TCHAR(Name ? Name : "<unnamed>"));

    //                SDL_CloseJoystick(Joystick);
    //            }
    //            else
    //            {
    //                UE_LOG(LogSDL3, Warning, TEXT("Failed to open joystick %d (ID %d)"), i, Joysticks[i]);
    //            }
    //        }
    //    }
    //    else
    //    {
    //        UE_LOG(LogSDL3, Log, TEXT("No joysticks detected"));
    //    }

    //    SDL_free(Joysticks); // SDL3 requires freeing the returned array
    //}


    //UE_LOG(LogSDL3, Log, TEXT("Attempting to build SDL window..."));

    //hiddenWindow = SDL_CreateWindow(
    //    "SDL Hidden Input Window",            
    //    640, 480,                  // Size (can be minimal)
    //    SDL_WINDOW_HIDDEN          // Flags
    //);

    //if (!hiddenWindow)
    //{
    //    UE_LOG(LogSDL3, Error, TEXT("Failed to create hidden SDL window: %s"), UTF8_TO_TCHAR(SDL_GetError()));
    //}
    //else
    //{
    //    UE_LOG(LogSDL3, Log, TEXT("Hidden SDL window created successfully"));
    //}

}

void FSDL3IntegrationModule::ShutdownModule()
{
    // Clean up SDL3 before the module unloads
    //SDL_Quit();
  /*  SDL_DestroyWindow(hiddenWindow);
    hiddenWindow = nullptr;*/
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSDL3IntegrationModule, SDL3Integration)