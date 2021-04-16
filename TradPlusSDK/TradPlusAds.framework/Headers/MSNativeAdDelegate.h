@class MSNativeAd;
@protocol MSNativeAdDelegate <NSObject>

@optional

/**
 * Sent when the native ad will present its modal content.
 *
 * @param nativeAd The native ad sending the message.
 */
- (void)willPresentModalForNativeAd:(MSNativeAd *)nativeAd;

/**
 * Sent when a native ad has dismissed its modal content, returning control to your application.
 *
 * @param nativeAd The native ad sending the message.
 */
- (void)didDismissModalForNativeAd:(MSNativeAd *)nativeAd;

/**
 * Sent when a user is about to leave your application as a result of tapping this native ad.
 *
 * @param nativeAd The native ad sending the message.
 */
- (void)willLeaveApplicationFromNativeAd:(MSNativeAd *)nativeAd;

- (void)nativeAdClicked:(MSNativeAd *)nativeAd;

- (void)nativeAdImpression:(MSNativeAd *)nativeAd;

@required

/** @name Managing Modal Content Presentation */

/**
 * Asks the delegate for a view controller to use for presenting modal content, such as the in-app
 * browser that can appear when an ad is tapped.
 *
 * @return A view controller that should be used for presenting modal content.
 */
- (UIViewController *)viewControllerForPresentingModalView;

@end
