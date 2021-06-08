#import <MoPubSDK/MoPub.h>
#import <TradPlusAds/MSNativeAdAdapter.h>

@interface MoPubNativeAdAdapter : NSObject <MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) MPNativeAd *ydNativeAd;

- (instancetype)initWithNativeAd:(MPNativeAd *)ydNativeAd adProperties:(NSDictionary *)adProps;

@end
