#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MSRewardedVideoReward;
@protocol MSRewardedVideoAdManagerDelegate;

/**
 * `MSRewardedVideoAdManager` represents a rewarded video for a single ad unit ID. This is the object that
 * `MSRewardedVideo` uses to load and present the ad.
 */
@interface MSRewardedVideoAdManager : NSObject

@property (nonatomic, weak) id<MSRewardedVideoAdManagerDelegate> delegate;
@property (nonatomic, readonly) NSString *adUnitID;
@property (nonatomic, strong) NSArray *mediationSettings;
@property (nonatomic, copy) NSString *customerId;

@property (nonatomic, strong) NSDictionary *dicAdConfig;
- (instancetype)initWithAdUnitID:(NSString *)adUnitID delegate:(id<MSRewardedVideoAdManagerDelegate>)delegate;

/**
 * Returns the custom event class type.
 */
- (Class)customEventClass;

/**
 * Loads a rewarded video ad with the ad manager's ad unit ID.
 *
 * @param keywords A string representing a set of keywords that should be passed to the TradPlusAd ad server to receive
 * more relevant advertising.
 *
 * @param location Latitude/Longitude that are passed to the TradPlusAd ad server
 * If this method is called when an ad is already available and we haven't already played a video for the last time we loaded an ad,
 * the object will simply notify the delegate that an ad loaded.
 *
 * @param customerId The user's id within the app.
 *
 * However, if an ad has been played for the last time a load was issued and load is called again, the method will request a new ad.
 */
- (void)loadRewardedVideoAdWithKeywords:(NSString *)keywords customerId:(NSString *)customerId;
- (void)loadRewardedVideoAdWithTimeoutInterval:(NSTimeInterval)interval customerId:(NSString *)customerId;

/**
 * Tells the caller whether the underlying ad network currently has an ad available for presentation.
 */
- (BOOL)hasAdAvailable;

/**
 * Plays a rewarded video ad.
 *
 * @param viewController Presents the rewarded video ad from viewController.
 */
- (void)presentRewardedVideoAdFromViewController:(UIViewController *)viewController;

/**
 * This method is called when another ad unit has played a rewarded video from the same network this ad manager's custom event
 * represents.
 */
- (void)handleAdPlayedForCustomEventNetwork;
- (void)removeRewardedVideoAd;
@end

@protocol MSRewardedVideoAdManagerDelegate <NSObject>

- (void)rewardedVideoDidLoadForAdManager:(MSRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidFailToLoadForAdManager:(MSRewardedVideoAdManager *)manager error:(NSError *)error;
- (void)rewardedVideoDidExpireForAdManager:(MSRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidFailToPlayForAdManager:(MSRewardedVideoAdManager *)manager error:(NSError *)error;
- (void)rewardedVideoWillAppearForAdManager:(MSRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidAppearForAdManager:(MSRewardedVideoAdManager *)manager;
- (void)rewardedVideoWillDisappearForAdManager:(MSRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidDisappearForAdManager:(MSRewardedVideoAdManager *)manager adInfo:(NSDictionary *)adInfo;
- (void)rewardedVideoDidReceiveTapEventForAdManager:(MSRewardedVideoAdManager *)manager;
- (void)rewardedVideoWillLeaveApplicationForAdManager:(MSRewardedVideoAdManager *)manager;
- (void)rewardedVideoShouldRewardUserForAdManager:(MSRewardedVideoAdManager *)manager reward:(MSRewardedVideoReward *)reward;
- (void)rewardedVideoDidLoadWinningBidWithInfoForAdManager:(MSRewardedVideoAdManager *)manager bidInfo:(NSDictionary*)bidInfo;
- (void)rewardedVideoDidPlayStartForAdManager:(MSRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidPlayEndForAdManager:(MSRewardedVideoAdManager *)manager;

@end
