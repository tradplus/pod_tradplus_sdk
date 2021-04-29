#import <TradPlusAds/MSNativeAdAdapter.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

/// This class implements the `MSNativeAdAdapter` and `GADNativeAdDelegate` protocols, that
@interface MSGoogleAdMobNativeAdAdapter : NSObject <MSNativeAdAdapter, GADNativeAdDelegate>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;

/// Google Mobile Ads  Native ad instance.
@property(nonatomic, strong) GADNativeAd *adMobNativeAd;

/// Google Mobile Ads adView to hold the  native ad view.
@property(nonatomic, strong) GADNativeAdView *adMobNativeAdView;

/// Returns an MPGoogleAdMobNativeAdAdapter with GADNativeAd.
- (instancetype)initWithAdMobNativeAd:(GADNativeAd *)adMobNativeAd
                         nativeAdView:(GADNativeAdView *)adMobNativeAdView;

@end

