#import <VungleSDK/VungleSDK.h>

@protocol MSVungleRouterDelegate;
@class VungleInstanceMediationSettings;

@interface MSVungleRouter : NSObject <VungleSDKDelegate>

@property (nonatomic, weak) id<MSVungleRouterDelegate> delegate;

extern NSString *const kVungleAppIdKey;
extern NSString *const kVunglePlacementIdKey;
extern NSString *const kVungleFlexViewAutoDismissSeconds;
extern NSString *const kVungleUserId;
extern NSString *const kVungleOrdinal;

+ (MSVungleRouter *)sharedRouter;

- (void)initializeSdkWithInfo:(NSDictionary *)info;
- (void)requestInterstitialAdWithCustomEventInfo:(NSDictionary *)info delegate:(id<MSVungleRouterDelegate>)delegate;
- (void)requestRewardedVideoAdWithCustomEventInfo:(NSDictionary *)info delegate:(id<MSVungleRouterDelegate>)delegate;
- (BOOL)isAdAvailableForPlacementId:(NSString *)placementId;
- (void)presentInterstitialAdFromViewController:(UIViewController *)viewController options:(NSDictionary *)options forPlacementId:(NSString *)placementId;
- (void)presentRewardedVideoAdFromViewController:(UIViewController *)viewController customerId:(NSString *)customerId settings:(VungleInstanceMediationSettings *)settings forPlacementId:(NSString *)placementId;
- (void)updateConsentStatus:(VungleConsentStatus)status;
- (VungleConsentStatus) getCurrentConsentStatus;
- (void)clearDelegateForPlacementId:(NSString *)placementId;
@end

@protocol MSVungleRouterDelegate <NSObject>

- (void)vungleAdDidLoad;
- (void)vungleAdWillAppear;
- (void)vungleAdWillDisappear;
- (void)vungleAdWasTapped;
- (void)vungleAdDidFailToPlay:(NSError *)error;
- (void)vungleAdDidFailToLoad:(NSError *)error;

@optional

- (void)vungleAdShouldRewardUser;

@end
