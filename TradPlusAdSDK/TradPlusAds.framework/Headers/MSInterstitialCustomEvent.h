//
//  MSInterstitialCustomEvent.h
//  AdExpress
//
//  Copyright (c) 2012 TradPlusAd, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSInterstitialCustomEventDelegate.h"

/**
 * The TradPlusAd iOS SDK mediates third party Ad Networks using custom events.  The custom events are
 * responsible for instantiating and manipulating objects in the third party SDK and translating
 * and communicating events from those objects back to the TradPlusAd SDK by notifying a delegate.
 *
 * `MSInterstitialCustomEvent` is a base class for custom events that support full-screen interstitial ads.
 * By implementing subclasses of `MSInterstitialCustomEvent` you can enable the TradPlusAd SDK to
 * natively support a wide variety of third-party ad networks.
 *
 * At runtime, the TradPlusAd SDK will find and instantiate an `MSInterstitialCustomEvent` subclass as needed and
 * invoke its `-requestInterstitialWithCustomEventInfo:` method.
 */


@interface MSInterstitialCustomEvent : NSObject

/** @name Requesting and Displaying an Interstitial Ad */

/**
 * Called when the TradPlusAd SDK requires a new interstitial ad.
 *
 * When the TradPlusAd SDK receives a response indicating it should load a custom event, it will send
 * this message to your custom event class. Your implementation of this method should load an
 * interstitial ad from a third-party ad network. It must also notify the
 * `MSInterstitialCustomEventDelegate` of certain lifecycle events.
 *
 * @param info A  dictionary containing additional custom data associated with a given custom event
 * request. This data is configurable on the TradPlusAd website, and may be used to pass dynamic information, such as publisher IDs.
 */

- (void)requestInterstitialWithCustomEventInfo:(NSDictionary *)info;

/**
 * Called when the interstitial should be displayed.
 *
 * This message is sent sometime after an interstitial has been successfully loaded, as a result
 * of your code calling `-[MSInterstitialAdController showFromViewController:]`. Your implementation
 * of this method should present the interstitial ad from the specified view controller.
 *
 * If you decide to [opt out of automatic impression tracking](enableAutomaticImpressionAndClickTracking), you should place your
 * manual calls to [-trackImpression]([MSInterstitialCustomEventDelegate trackImpression]) in this method to ensure correct metrics.
 *
 * @param rootViewController The controller to use to present the interstitial modally.
 *
 */
- (void)showInterstitialFromRootViewController:(UIViewController *)rootViewController;
- (void)showSplashInWindow:(UIWindow *)window withBottomView:(nullable UIView *)bottomView;
/** @name Impression and Click Tracking */

/**
 * Override to opt out of automatic impression and click tracking.
 *
 * By default, the  MSInterstitialCustomEventDelegate will automatically record impressions and clicks in
 * response to the appropriate callbacks. You may override this behavior by implementing this method
 * to return `NO`.
 *
 * @warning **Important**: If you do this, you are responsible for calling the `[-trackImpression]([MSInterstitialCustomEventDelegate trackImpression])` and
 * `[-trackClick]([MSInterstitialCustomEventDelegate trackClick])` methods on the custom event delegate. Additionally, you should make sure that these
 * methods are only called **once** per ad.
 */
- (BOOL)enableAutomaticImpressionAndClickTracking;

/** @name Communicating with the TradPlusAd SDK */

/**
 * The `MSInterstitialCustomEventDelegate` to send messages to as events occur.
 *
 * The `delegate` object defines several methods that you should call in order to inform both TradPlusAd
 * and your `MSInterstitialAdController`'s delegate of the progress of your custom event.
 *
 */
- (BOOL)hasAdAvailable;
@property (nonatomic, weak) id<MSInterstitialCustomEventDelegate> delegate;

@end
