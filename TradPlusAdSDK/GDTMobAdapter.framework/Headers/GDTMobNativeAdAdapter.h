#import "GDTUnifiedNativeAd.h"
#import <TradPlusAds/MSNativeAdAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface GDTMobNativeAdAdapter : NSObject  <MSNativeAdAdapter>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;

@property(nonatomic, strong) GDTUnifiedNativeAdView *gdtUnifiedNativeAdView;
@property (nonatomic, strong) GDTUnifiedNativeAdDataObject *nativeAdObject;
- (instancetype)initWithGDTNativeAd:(GDTUnifiedNativeAdDataObject *)nativeAdObject unifiedNativeAdView:(GDTUnifiedNativeAdView *)gdtUnifiedNativeAdView;

@end

NS_ASSUME_NONNULL_END

