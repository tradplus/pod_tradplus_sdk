#import <TradPlusAds/MSNativeCustomEvent.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface MSGoogleAdMobNativeCustomEvent : MSNativeCustomEvent

/// Sets the preferred location of the AdChoices icon.
+ (void)setAdChoicesPosition:(GADAdChoicesPosition)position;

@end
