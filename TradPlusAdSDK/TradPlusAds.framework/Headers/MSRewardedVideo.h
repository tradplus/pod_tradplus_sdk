//
//  MSRewardedVideo.h
//  AdExpress
//
//  Copyright (c) 2016 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MSRewardedVideoReward;
@protocol MSRewardedVideoDelegate;

/**
 * `MSRewardedVideo` allows you to load and play rewarded video ads. All ad events are
 * reported, with an ad unit ID, to the delegate allowing the application to respond to the events
 * for the corresponding ad.
 *
 * **Important**: You must call `[initializeRewardedVideoWithGlobalMediationSettings:delegate:][TradPlusAd initializeRewardedVideoWithGlobalMediationSettings:delegate:]`
 * to initialize the rewarded video system.
 */
@interface MSRewardedVideo : NSObject

@property (nonatomic, strong) NSMutableDictionary *dicADUnitIDObj;
+ (MSRewardedVideo *)sharedInstance;

/**
 * Loads a rewarded video ad for the given ad unit ID.
 *
 * The mediation settings array should contain ad network specific objects for networks that may be loaded for the given ad unit ID.
 * You should set the properties on these objects to determine how the underlying ad network should behave. You only need to supply
 * objects for the networks you wish to configure. If you do not want your network to behave differently from its default behavior, do
 * not pass in an mediation settings object for that network.
 *
 * @param adUnitID The ad unit ID that ads should be loaded from.
 * @param mediationSettings An array of mediation settings objects that map to networks that may show ads for the ad unit ID. This array
 * should only contain objects for networks you wish to configure. This can be nil.
 */
+ (void)loadRewardedVideoAdWithAdUnitID:(NSString *)adUnitID withMediationSettings:(NSArray *)mediationSettings;

/**
 * Loads a rewarded video ad for the given ad unit ID.
 *
 * The mediation settings array should contain ad network specific objects for networks that may be loaded for the given ad unit ID.
 * You should set the properties on these objects to determine how the underlying ad network should behave. You only need to supply
 * objects for the networks you wish to configure. If you do not want your network to behave differently from its default behavior, do
 * not pass in an mediation settings object for that network.
 *
 * @param adUnitID The ad unit ID that ads should be loaded from.
 * @param keywords A string representing a set of keywords that should be passed to the TradPlusAd ad server to receive
 * more relevant advertising.
 * @param location Latitude/Longitude that are passed to the TradPlusAd ad server
 * @param mediationSettings An array of mediation settings objects that map to networks that may show ads for the ad unit ID. This array
 * should only contain objects for networks you wish to configure. This can be nil.
 */
+ (void)loadRewardedVideoAdWithAdUnitID:(NSString *)adUnitID keywords:(NSString *)keywords mediationSettings:(NSArray *)mediationSettings;

/**
 * Loads a rewarded video ad for the given ad unit ID.
 *
 * The mediation settings array should contain ad network specific objects for networks that may be loaded for the given ad unit ID.
 * You should set the properties on these objects to determine how the underlying ad network should behave. You only need to supply
 * objects for the networks you wish to configure. If you do not want your network to behave differently from its default behavior, do
 * not pass in an mediation settings object for that network.
 *
 * @param adUnitID The ad unit ID that ads should be loaded from.
 * @param keywords A string representing a set of keywords that should be passed to the TradPlusAd ad server to receive
 * more relevant advertising.
 * @param location Latitude/Longitude that are passed to the TradPlusAd ad server
 * @param customerId This is the ID given to the user by the publisher to identify them in their app
 * @param mediationSettings An array of mediation settings objects that map to networks that may show ads for the ad unit ID. This array
 * should only contain objects for networks you wish to configure. This can be nil.
 */
+ (void)loadRewardedVideoAdWithAdUnitID:(NSString *)adUnitID keywords:(NSString *)keywords customerId:(NSString *)customerId mediationSettings:(NSArray *)mediationSettings;

+ (void)loadRewardedVideoAdWithAdUnitID:(NSString *)adUnitID keywords:(NSString *)keywords customerId:(NSString *)customerId mediationSettings:(NSArray *)mediationSettings config:(NSDictionary *)dicConfig;

/**
 * Returns whether or not an ad is available for the given ad unit ID.
 *
 * @param adUnitID The ad unit ID associated with the ad you want to retrieve the availability for.
 */
+ (BOOL)hasAdAvailableForAdUnitID:(NSString *)adUnitID;

/**
 * Plays a rewarded video ad.
 *
 * @param adUnitID The ad unit ID associated with the video ad you wish to play.
 * @param viewController The view controller that will present the rewarded video ad.
 *
 * @warning **Important**: You should not attempt to play the rewarded video unless `+hasAdAvailableForAdUnitID:` indicates that an
 * ad is available for playing or you have received the `[-rewardedVideoAdDidLoadForAdUnitID:]([MSRewardedVideoDelegate rewardedVideoAdDidLoadForAdUnitID:])`
 * message.
 */
+ (void)presentRewardedVideoAdForAdUnitID:(NSString *)adUnitID fromViewController:(UIViewController *)viewController;

+ (void)removeRewardedVideoAdForAdUnitID:(NSString *)adUnitID;
@end

@protocol MSRewardedVideoDelegate <NSObject>

@optional

/**
 * This method is called after an ad loads successfully.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 */
- (void)rewardedVideoAdDidLoadForAdUnitID:(NSString *)adUnitID;

/**
 * This method is called after an ad fails to load.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 * @param error An error indicating why the ad failed to load.
 */
- (void)rewardedVideoAdDidFailToLoadForAdUnitID:(NSString *)adUnitID error:(NSError *)error;

/**
 * This method is called when a previously loaded rewarded video is no longer eligible for presentation.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 */
- (void)rewardedVideoAdDidExpireForAdUnitID:(NSString *)adUnitID;

/**
 * This method is called when an attempt to play a rewarded video fails.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 * @param error An error describing why the video couldn't play.
 */
- (void)rewardedVideoAdDidFailToPlayForAdUnitID:(NSString *)adUnitID error:(NSError *)error;

/**
 * This method is called when a rewarded video ad is about to appear.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 */
- (void)rewardedVideoAdWillAppearForAdUnitID:(NSString *)adUnitID;

/**
 * This method is called when a rewarded video ad has appeared.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 */
- (void)rewardedVideoAdDidAppearForAdUnitID:(NSString *)adUnitID;

/**
 * This method is called when a rewarded video ad will be dismissed.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 */
- (void)rewardedVideoAdWillDisappearForAdUnitID:(NSString *)adUnitID;

/**
 * This method is called when a rewarded video ad has been dismissed.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 */
- (void)rewardedVideoAdDidDisappearForAdUnitID:(NSString *)adUnitID adInfo:(NSDictionary *)adInfo;

/**
 * This method is called when the user taps on the ad.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 */
- (void)rewardedVideoAdDidReceiveTapEventForAdUnitID:(NSString *)adUnitID;

/**
 * This method is called when a rewarded video ad will cause the user to leave the application.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 */
- (void)rewardedVideoAdWillLeaveApplicationForAdUnitID:(NSString *)adUnitID;

/**
 * This method is called when the user should be rewarded for watching a rewarded video ad.
 *
 * @param adUnitID The ad unit ID of the ad associated with the event.
 * @param reward The object that contains all the information regarding how much you should reward the user.
 */
- (void)rewardedVideoAdShouldRewardForAdUnitID:(NSString *)adUnitID reward:(MSRewardedVideoReward *)reward;

- (void)rewardedVideoDidLoadWinningBidWithInfoForAdUnitID:(NSString *)adUnitID bidInfo:(NSDictionary *)bidInfo;
- (void)rewardedVideoDidPlayStartForAdUnitID:(NSString *)adUnitID;
- (void)rewardedVideoDidPlayEndForAdUnitID:(NSString *)adUnitID;
@end
