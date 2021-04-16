#import <TradPlusAds/MSInterstitialCustomEvent.h>

/*
 * Certified with version 4.0.6 of the Vungle SDK.
 *
 * The Vungle SDK does not provide an "application will leave" callback, thus this custom event
 * will not invoke the interstitialCustomEventWillLeaveApplication: delegate method.
 */

@interface VungleInterstitialCustomEvent : MSInterstitialCustomEvent

@end
