#import <TradPlusAds/MSNativeAdAdapter.h>
#import <InMobiSDK/IMNative.h>
#import <InMobiSDK/IMNativeDelegate.h>

@interface InMobiNativeAdAdapter : NSObject <MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) IMNative *nativeAd;

- (instancetype)initWithNativeAd:(IMNative *)nativeAd adWidth:(float)adWidth;

@end
