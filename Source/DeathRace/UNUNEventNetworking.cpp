#include "UNUNEventNetworking.h"

#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Common/UdpSocketBuilder.h"
#include "Common/UdpSocketReceiver.h"
#include "Async/Async.h"
#include "Math/IntVector.h"

void UUNUNEventNetworkSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    StartClient();
}

void UUNUNEventNetworkSubsystem::Deinitialize()
{
   // GetWorld()->GetTimerManager().ClearTimer(KeepAliveTimer);
    SendRawString("BYE");
    StopClient();
    Super::Deinitialize();
}

void UUNUNEventNetworkSubsystem::StartClient()
{
    // Create UDP socket
    UE_LOG(LogTemp, Error, TEXT("Starting CLientt..."));
    UdpSocket = FUdpSocketBuilder(TEXT("UNUNEventClient"))
        .AsNonBlocking()
        .AsReusable()
        .WithBroadcast()             
        .WithReceiveBufferSize(2 * 1024 * 1024);

    if (!UdpSocket)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create UDP socket"));
        return;
    }

    // Bind to any local port
    TSharedRef<FInternetAddr> LocalAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
    LocalAddr->SetAnyAddress();
    LocalAddr->SetPort(0);

    if (!UdpSocket->Bind(*LocalAddr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to bind UDP socket"));
        return;
    }

    // Receiver thread
    const FTimespan ThreadWaitTime = FTimespan::FromMilliseconds(50);
    UdpReceiver = MakeShared<FUdpSocketReceiver>(UdpSocket, ThreadWaitTime, TEXT("UNUNEventReceiver"));

    UdpReceiver->OnDataReceived().BindLambda(
        [this](const FArrayReaderPtr& Data, const FIPv4Endpoint& Endpoint)
        {
            HandlePacket(Data, Endpoint);
        });

    UdpReceiver->Start();

    UE_LOG(LogTemp, Log, TEXT("UNUNEventNetworkSubsystem socket ready. Broadcasting discovery..."));
    DiscoverServer();
}


void UUNUNEventNetworkSubsystem::DiscoverServer()
{
    if (!UdpSocket) return;

    // Broadcast address
    TSharedRef<FInternetAddr> BroadcastAddr =
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();

    bool bValid = false;
    BroadcastAddr->SetIp(TEXT("255.255.255.255"), bValid);
    BroadcastAddr->SetPort(5000);

    FTCHARToUTF8 Convert(TEXT("RACING"));
    const uint8* Bytes = (const uint8*)Convert.Get();
    int32 Size = Convert.Length();

    int32 Sent = 0;
    UdpSocket->SendTo(Bytes, Size, Sent, *BroadcastAddr);
}


void UUNUNEventNetworkSubsystem::StopClient()
{
    UE_LOG(LogTemp, Error, TEXT("Stopping CLientt..."));
    if (UdpReceiver.IsValid())
    {
        UdpReceiver->Stop();
        UdpReceiver.Reset();
    }

    if (UdpSocket)
    {
        UdpSocket->Close();
        UdpSocket = nullptr;
    }
}

void UUNUNEventNetworkSubsystem::SendRawString(const FString& Message)
{
    if (!UdpSocket)
        return;

    FTCHARToUTF8 Convert(*Message);
    const uint8* Bytes = (const uint8*)Convert.Get();
    int32 Size = Convert.Length();

    int32 Sent = 0;
    UdpSocket->SendTo(Bytes, Size, Sent, *ServerEndpoint.ToInternetAddr());
}

void UUNUNEventNetworkSubsystem::StartEvent()
{
    SendRawString(TEXT("START_EVENT"));
}

void UUNUNEventNetworkSubsystem::HandlePacket(const FArrayReaderPtr& Data, const FIPv4Endpoint& Endpoint)
{
    FString Raw = UTF8_TO_TCHAR((const char*)Data->GetData());

    if (Raw == TEXT("EVENT_WIN"))
    {
        AsyncTask(ENamedThreads::GameThread, [this]()
            {
                HandleEventWin();
            });
    }
    else if (Raw == TEXT("EVENT_LOSS"))
    {
        AsyncTask(ENamedThreads::GameThread, [this]()
            {
                HandleEventLoss();
            });
    }
    else if (Raw.StartsWith("SERVER "))
    {
        FString Ip = Raw.RightChop(7); // after "SERVER "
        UE_LOG(LogTemp, Log, TEXT("Discovered server at %s"), *Ip);

        // Store endpoint
        TSharedRef<FInternetAddr> Addr =
            ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();

        bool bValid = false;
        Addr->SetIp(*Ip, bValid);
        Addr->SetPort(5000);

        if (bValid)
        {
            ServerEndpoint = FIPv4Endpoint(Addr);
            bServerKnown = true;
        }
        // Start keep-alive pulse every 20 seconds
        AsyncTask(ENamedThreads::GameThread, [this]()
            {
                FTimerHandle KeepAliveTimer;
                SendKeepAlive();
                if (UGameInstance* GI = GetGameInstance())
                {
                    GI->GetTimerManager().SetTimer(
                        KeepAliveTimer,
                        this,
                        &UUNUNEventNetworkSubsystem::SendKeepAlive,
                        20.0f,
                        true
                    );
                }
            });

        return;
    }
}

void UUNUNEventNetworkSubsystem::HandleEventWin()
{
    UE_LOG(LogTemp, Log, TEXT("Event finished: WIN"));
    OnEventFinished.Broadcast(true);
}

void UUNUNEventNetworkSubsystem::HandleEventLoss()
{
    UE_LOG(LogTemp, Log, TEXT("Event finished: LOSS"));
    OnEventFinished.Broadcast(false);
}

void UUNUNEventNetworkSubsystem::SendKeepAlive()
{
    if (!UdpSocket || !bServerKnown)
        return;

    FTCHARToUTF8 Convert(TEXT("PULSE"));
    const uint8* Bytes = (const uint8*)Convert.Get();
    int32 Size = Convert.Length();

    int32 Sent = 0;
    UdpSocket->SendTo(Bytes, Size, Sent, *ServerEndpoint.ToInternetAddr());

    UE_LOG(LogTemp, Verbose, TEXT("Sent keep-alive to server"));
}