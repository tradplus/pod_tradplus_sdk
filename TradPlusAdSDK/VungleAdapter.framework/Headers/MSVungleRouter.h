#import <VungleSDK/VungleSDK.h>
#import <UIKit/UIKit.h>

@protocol MSVungleRouterDelegate;
@class VungleInstanceMediationSettings;

@interface MSVungleRouter : NSObject <VungleSDKDelegate>

@property (nonatomic, weak) id<MSVungleRouterDelegate> delegate;

extern NSString *const kVungleAppIdKey;
extern NSString *const kVunglePlacementIdKey;
extern NSString *const kVungleFlexViewAutoDismissSeconds;
extern NSString *const kVungleUserId;
extern NSString *const kVungleOrdinal;
extern NSString *const kVungleBidTokenKey;

+ (MSVungleRouter *)sharedRouter;

- (BOOL)isAdAvailableForPlacementId:(NSString *)placementId bidToken:(NSString *)bidToken;

- (void)requestRewardedVideoAdWithPlacementId:(NSString *)placementId delegate:(id<MSVungleRouterDelegate>)delegate bidToken:(NSString *)bidToken;

- (void)presentRewardedVideoAdFromViewController:(UIViewController *)viewController customerId:(NSString *)customerId settings:(VungleInstanceMediationSettings *)settings forPlacementId:(NSString *)placementId bidToken:(NSString *)bidToken;

- (void)requestInterstitialAdWithPlacementId:(NSString *)placementId delegate:(id<MSVungleRouterDelegate>)delegate bidToken:(NSString *)bidToken;

- (void)presentInterstitialAdFromViewController:(UIViewController *)viewController options:(NSDictionary *)options forPlacementId:(NSString *)placementId bidToken:(NSString *)bidToken;


- (void)requestBannerAdWithPlacementId:(NSString *)placementId
                                  size:(VungleAdSize)size
                              delegate:(id<MSVungleRouterDelegate>)delegate
                                  bidToken:(NSString *)bidToken;

///MREC 用于原生广告
- (void)requestMRECAdWithPlacementId:(NSString *)placementId delegate:(id<MSVungleRouterDelegate>)delegate bidToken:(NSString *)bidToken;

- (BOOL)addAdViewToView:(UIView *)publisherView placementID:(NSString *)placementID bidToken:(NSString *)bidToken error:(NSError **)error;

- (void)clearDelegateForPlacementId:(NSString *)placementId;

- (BOOL)finishedDisplayingAd:(NSString *)placementId delegate:(id<MSVungleRouterDelegate>)delegate;

- (BOOL)hasPlacementIdAd:(NSString *)placementId;
@end

@protocol MSVungleRouterDelegate <NSObject>

///缓存加载成功
- (void)vungleAdDidLoad;
///广告即将开始播放
- (void)vungleAdWillAppear;
//v5.7.4增加的确认展现时回调
- (void)vungleAdDidShow;
- (void)vungleAdWillDisappear;
- (void)vungleAdWasTapped;
- (void)vungleAdDidFailToPlay:(NSError *)error;
///缓存加载失败
- (void)vungleAdDidFailToLoad:(NSError *)error;
@optional

- (void)vungleAdShouldRewardUser;

@end
