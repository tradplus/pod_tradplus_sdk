#if __has_include(<TradPlusAd/TradPlusAd.h>)
#import <TradPlusAd/TradPlusAd.h>
#else
    #import <TradPlusAds/MSInterstitialCustomEvent.h>
#endif

/*
 * Certified with version 4.0.6 of the Vungle SDK.
 *
 * The Vungle SDK does not provide an "application will leave" callback, thus this custom event
 * will not invoke the interstitialCustomEventWillLeaveApplication: delegate method.
 */

@interface VungleInterstitialCustomEvent : MSInterstitialCustomEvent

@end
