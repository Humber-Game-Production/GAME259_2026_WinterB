#pragma once

#include "CoreMinimal.h"
#include "Common/UdpSocketReceiver.h"
#include "Common/UdpSocketBuilder.h"
#include "IPAddress.h"

#include "Subsystems/GameInstanceSubsystem.h"
#include "UNUNEventNetworking.generated.h"

class FUdpSocketReceiver;
class FSocket;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventFinished, bool, bWasWin);
UCLASS()
class DEATHRACE_API UUNUNEventNetworkSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:

    // Blueprint: Call this to start an event on the C server
    UFUNCTION(BlueprintCallable, Category = "UNUN|Events")
    void StartEvent();

    // Blueprint: Fired when EVENT_WIN or EVENT_LOSS arrives
    UPROPERTY(BlueprintAssignable, Category = "UNUN|Events")
    FOnEventFinished OnEventFinished;

    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
   
    virtual void Deinitialize() override;


  

private:

    // Networking
    FSocket* UdpSocket = nullptr;
    TSharedPtr<FUdpSocketReceiver> UdpReceiver;
    FIPv4Endpoint ServerEndpoint;

    bool bServerKnown;

  

    void StartClient();
    void DiscoverServer();
    void StopClient();

    void SendRawString(const FString& Message);
    void HandlePacket(const FArrayReaderPtr& Data, const FIPv4Endpoint& Endpoint);

    void HandleEventWin();
    void HandleEventLoss();

    void SendKeepAlive();
};