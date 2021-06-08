#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSPrivateRewardedVideoCustomEventDelegate.h"

@class MSAdConfiguration;
@class MSRewardedVideoReward;

@protocol MSRewardedVideoAdapterDelegate;
@protocol MSMediationSettingsProtocol;

/**
 * `MSRewardedVideoAdapter` directly communicates with the appropriate custom event to
 * load and show a rewarded video. It is also the class that handles impression
 * and click tracking. Finally, the class will report a failure to load an ad if the ad
 * takes too long to load.
 */
@interface MSRewardedVideoAdapter : NSObject <MSPrivateRewardedVideoCustomEventDelegate>

@property (nonatomic, weak) id<MSRewardedVideoAdapterDelegate> delegate;

- (instancetype)initWithDelegate:(id<MSRewardedVideoAdapterDelegate>)delegate;

/**
 * Called to retrieve an ad once we get a response from the server.
 *
 * @param configuration Contains the details about the ad we are loading.
 */
- (void)getAdWithConfiguration:(MSAdConfiguration *)configuration;

/**
 * Tells the caller whether the underlying ad network currently has an ad available for presentation.
 */
- (BOOL)hasAdAvailable;

/**
 * Plays a rewarded video ad.
 *
 * @param viewController Presents the rewarded video ad from viewController.
 */
- (void)presentRewardedVideoFromViewController:(UIViewController *)viewController;

/**
 * This method is called when another ad unit has played a rewarded video from the same network this adapter's custom event
 * represents.
 */
- (void)handleAdPlayedForCustomEventNetwork;
- (void)removeRewardedVideoAd;
@end

@protocol MSRewardedVideoAdapterDelegate <NSObject>

- (id<MSMediationSettingsProtocol>)instanceMediationSettingsForClass:(Class)aClass;

- (void)rewardedVideoDidLoadForAdapter:(MSRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidFailToLoadForAdapter:(MSRewardedVideoAdapter *)adapter error:(NSError *)error;
- (void)rewardedVideoDidExpireForAdapter:(MSRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidFailToPlayForAdapter:(MSRewardedVideoAdapter *)adapter error:(NSError *)error;
- (void)rewardedVideoWillAppearForAdapter:(MSRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidAppearForAdapter:(MSRewardedVideoAdapter *)adapter;
- (void)rewardedVideoWillDisappearForAdapter:(MSRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidDisappearForAdapter:(MSRewardedVideoAdapter *)adapter adInfo:(NSDictionary *)adInfo;
- (void)rewardedVideoDidReceiveTapEventForAdapter:(MSRewardedVideoAdapter *)adapter;
- (void)rewardedVideoWillLeaveApplicationForAdapter:(MSRewardedVideoAdapter *)adapter;
- (void)rewardedVideoShouldRewardUserForAdapter:(MSRewardedVideoAdapter *)adapter reward:(MSRewardedVideoReward *)reward;
- (void)rewardedVideoDidLoadWinningBidWithInfoForAdapter:(MSRewardedVideoAdapter *)adapter bidInfo:(NSDictionary*)bidInfo;
- (void)rewardedVideoDidPlayStartForAdapter:(MSRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidPlayEndForAdapter:(MSRewardedVideoAdapter *)adapter;

@optional
- (NSString *)rewardedVideoAdUnitId;
- (NSString *)rewardedVideoCustomerId;
- (MSAdConfiguration *)configuration;

@end
