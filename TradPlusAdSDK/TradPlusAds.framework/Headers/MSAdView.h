//
//  MSAdView.h
//  AdExpress
//
//  Copyright 2016 AdExpress, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSConstants.h"

typedef enum
{
    MSNativeAdOrientationAny,
    MSNativeAdOrientationPortrait,
    MSNativeAdOrientationLandscape
} MSNativeAdOrientation;

@protocol MSAdViewDelegate;

NS_ASSUME_NONNULL_BEGIN
/**
 * The MSAdView class provides a view that can display banner advertisements.
 */

@interface MSAdView : UIView

/** @name Initializing a Banner Ad */

/**
 * Initializes an MSAdView with the given ad unit ID and banner size.
 *
 * @param adUnitId A string representing a TradPlusAd ad unit ID.
 * @param size The desired ad size. A list of standard ad sizes is available in MSConstants.h.
 * @return A newly initialized ad view corresponding to the given ad unit ID and size.
 */
- (id)initWithAdUnitId:(NSString *)adUnitId size:(CGSize)size;
- (id)initWithAdConfig:(NSDictionary *)adConfig size:(CGSize)size;
- (void)updateAdConfig:(NSDictionary *)adConfig;
/** @name Setting and Getting the Delegate */

@property (nonatomic, strong) UIView *realAdView;
/**
 * The delegate (`MSAdViewDelegate`) of the ad view.
 *
 * @warning **Important**: Before releasing an instance of `MSAdView`, you must set its delegate
 * property to `nil`.
 */
@property (nonatomic, weak) id<MSAdViewDelegate> delegate;

/** @name Setting Request Parameters */

/**
 * The TradPlusAd ad unit ID for this ad view.
 *
 * Ad unit IDs are created on the TradPlusAd website. An ad unit is a defined placement in your
 * application set aside for advertising. If no ad unit ID is set, the ad view will use a default
 * ID that only receives test ads.
 */
@property (nonatomic, copy) NSString *adUnitId;

/**
 * A string representing a set of keywords that should be passed to the TradPlusAd ad server to receive
 * more relevant advertising.
 *
 * Keywords are typically used to target ad campaigns at specific user segments. They should be
 * formatted as comma-separated key-value pairs (e.g. "marital:single,age:24").
 *
 * On the TradPlusAd website, keyword targeting options can be found under the "Advanced Targeting"
 * section when managing campaigns.
 */
@property (nonatomic, copy) NSString *keywords;

/** @name Enabling Test Mode */

/**
 * A Boolean value that determines whether the ad view should request ads in test mode.
 *
 * The default value is NO.
 * @warning **Important**: If you set this value to YES, make sure to reset it to NO before
 * submitting your application to the App Store.
 */
@property (nonatomic, assign, getter = isTesting) BOOL testing;

/** @name Loading a Banner Ad */

/**
 * Requests a new ad from the TradPlusAd ad server.
 *
 * If the ad view is already loading an ad, this call will be ignored. You may use `forceRefreshAd`
 * if you would like cancel any existing ad requests and force a new ad to load.
 */
- (void)loadAd;
- (void)loadAdWithTimeoutInterval:(NSTimeInterval)interval;
- (void)showAdInKeyWindow:(UIWindow *)window customView:(nullable UIView *)customView skipView:(nullable UIView *)skipView;
- (void)loadTradPlusAdWithURL:(NSURL *)URL;

/**
 * Cancels any existing ad requests and requests a new ad from the TradPlusAd ad server.
 */
- (void)forceRefreshAd;

/** @name Handling Orientation Changes */

/**
 * Informs the ad view that the device orientation has changed.
 *
 * Banners from some third-party ad networks have orientation-specific behavior. You should call
 * this method when your application's orientation changes if you want mediated ads to acknowledge
 * their new orientation.
 *
 * If your application layout needs to change based on the size of the mediated ad, you may want to
 * check the value of `adContentViewSize` after calling this method, in case the orientation change
 * causes the mediated ad to resize.
 *
 * @param newOrientation The new interface orientation (after orientation changes have occurred).
 */
- (void)rotateToOrientation:(UIInterfaceOrientation)newOrientation;

/**
 * Forces third-party native ad networks to only use ads sized for the specified orientation.
 *
 * Banners from some third-party ad networks have orientation-specific behaviors and/or sizes.
 * You may use this method to lock ads to a certain orientation. For instance,
 * if you call this with MSInterfaceOrientationPortrait, native networks will never
 * return ads sized for the landscape orientation.
 *
 * @param orientation An MSNativeAdOrientation enum value.
 *
 * <pre><code>typedef enum {
 *          MSNativeAdOrientationAny,
 *          MSNativeAdOrientationPortrait,
 *          MSNativeAdOrientationLandscape
 *      } MSNativeAdOrientation;
 * </pre></code>
 *
 * @see unlockNativeAdsOrientation
 * @see allowedNativeAdsOrientation
 */

- (void)lockNativeAdsToOrientation:(MSNativeAdOrientation)orientation;

/**
 * Allows third-party native ad networks to use ads sized for any orientation.
 *
 * You do not need to call this method unless you have previously called
 * `lockNativeAdsToOrientation:`.
 *
 * @see lockNativeAdsToOrientation:
 * @see allowedNativeAdsOrientation
 */
- (void)unlockNativeAdsOrientation;

/**
 * Returns the banner orientations that third-party ad networks are allowed to use.
 *
 * @return An enum value representing an allowed set of orientations.
 *
 * @see lockNativeAdsToOrientation:
 * @see unlockNativeAdsOrientation
 */
- (MSNativeAdOrientation)allowedNativeAdsOrientation;

/** @name Obtaining the Size of the Current Ad */

/**
 * Returns the size of the current ad being displayed in the ad view.
 *
 * Ad sizes may vary between different ad networks. This method returns the actual size of the
 * underlying mediated ad. This size may be different from the original, initialized size of the
 * ad view. You may use this size to determine to adjust the size or positioning of the ad view
 * to avoid clipping or border issues.
 *
 * @returns The size of the underlying mediated ad.
 */
- (CGSize)adContentViewSize;

/** @name Managing the Automatic Refreshing of Ads */

/**
 * Stops the ad view from periodically loading new advertisements.
 *
 * By default, an ad view is allowed to automatically load new advertisements if a refresh interval
 * has been configured on the TradPlusAd website. This method prevents new ads from automatically loading,
 * even if a refresh interval has been specified.
 *
 * As a best practice, you should call this method whenever the ad view will be hidden from the user
 * for any period of time, in order to avoid unnecessary ad requests. You can then call
 * `startAutomaticallyRefreshingContents` to re-enable the refresh behavior when the ad view becomes
 * visible.
 *
 * @see startAutomaticallyRefreshingContents
 */
- (void)stopAutomaticallyRefreshingContents;

/**
 * Causes the ad view to periodically load new advertisements in accordance with user-defined
 * refresh settings on the TradPlusAd website.
 *
 * Calling this method is only necessary if you have previously stopped the ad view's refresh
 * behavior using `stopAutomaticallyRefreshingContents`. By default, an ad view is allowed to
 * automatically load new advertisements if a refresh interval has been configured on the TradPlusAd
 * website. This method has no effect if a refresh interval has not been set.
 *
 * @see stopAutomaticallyRefreshingContents
 */
- (void)startAutomaticallyRefreshingContents;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark -

/**
 * The delegate of an `MSAdView` object must adopt the `MSAdViewDelegate` protocol. It must
 * implement `viewControllerForPresentingModalView` to provide a root view controller from which
 * the ad view should present modal content.
 *
 * Optional methods of this protocol allow the delegate to be notified of banner success or
 * failure, as well as other lifecycle events.
 */

@protocol MSAdViewDelegate <NSObject>

@required

/** @name Managing Modal Content Presentation */

/**
 * Asks the delegate for a view controller to use for presenting modal content, such as the in-app
 * browser that can appear when an ad is tapped.
 *
 * @return A view controller that should be used for presenting modal content.
 */
- (UIViewController *)viewControllerForPresentingModalView;

@optional

/** @name Detecting When a Banner Ad is Loaded */

/**
 * Sent when an ad view successfully loads an ad.
 *
 * Your implementation of this method should insert the ad view into the view hierarchy, if you
 * have not already done so.
 *
 * @param view The ad view sending the message.
 */
- (void)adViewDidLoadAd:(MSAdView *)view;

/**
 * Sent when an ad view fails to load an ad.
 *
 * To avoid displaying blank ads, you should hide the ad view in response to this message.
 *
 * @param view The ad view sending the message.
 */
- (void)adViewDidFailToLoadAd:(MSAdView *)view didFailWithError:(NSError *)error;

/** @name Detecting When a User Interacts With the Ad View */

/**
 * Sent when an ad view is about to present modal content.
 *
 * This method is called when the user taps on the ad view. Your implementation of this method
 * should pause any application activity that requires user interaction.
 *
 * @param view The ad view sending the message.
 * @see `didDismissModalViewForAd:`
 */
- (void)willPresentModalViewForAd:(MSAdView *)view;

/**
 * Sent when an ad view has dismissed its modal content, returning control to your application.
 *
 * Your implementation of this method should resume any application activity that was paused
 * in response to `willPresentModalViewForAd:`.
 *
 * @param view The ad view sending the message.
 * @see `willPresentModalViewForAd:`
 */
- (void)didDismissModalViewForAd:(MSAdView *)view;

/**
 * Sent when a user is about to leave your application as a result of tapping
 * on an ad.
 *
 * Your application will be moved to the background shortly after this method is called.
 *
 * @param view The ad view sending the message.
 */
- (void)willLeaveApplicationFromAd:(MSAdView *)view;
- (void)adViewDidShown:(MSAdView *)view;
- (void)adViewCountdownToZero:(MSAdView *)view;
- (void)tpAdViewClose:(MSAdView *)view;

NS_ASSUME_NONNULL_END

@end
