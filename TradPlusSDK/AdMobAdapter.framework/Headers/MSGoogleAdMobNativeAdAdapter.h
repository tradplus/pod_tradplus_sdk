#import <TradPlusAds/MSNativeAdAdapter.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

/// This class implements the `MSNativeAdAdapter` and `GADUnifiedNativeAdDelegate` protocols, that
@interface MSGoogleAdMobNativeAdAdapter : NSObject <MSNativeAdAdapter, GADUnifiedNativeAdDelegate>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;

/// Google Mobile Ads Unified Native ad instance.
@property(nonatomic, strong) GADUnifiedNativeAd *adMobUnifiedNativeAd;

/// Google Mobile Ads adView to hold the Unified native ad view.
@property(nonatomic, strong) GADUnifiedNativeAdView *adMobUnifiedNativeAdView;

/// Returns an MPGoogleAdMobNativeAdAdapter with GADUnifiedNativeAd.
- (instancetype)initWithAdMobUnifiedNativeAd:(GADUnifiedNativeAd *)adMobUnifiedNativeAd
                         unifiedNativeAdView:(GADUnifiedNativeAdView *)adMobUnifiedNativeAdView;

@end

