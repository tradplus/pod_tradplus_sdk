#import "GDTUnifiedNativeAd.h"
#import "GDTMobUnifiedNativeAdCustomView.h"
#import <TradPlusAds/MSNativeAdAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface GDTMobNativeAdAdapter : NSObject  <MSNativeAdAdapter, GDTUnifiedNativeAdViewDelegate>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;

@property(nonatomic, strong) GDTUnifiedNativeAdView *gdtUnifiedNativeAdView;
@property (nonatomic, strong) GDTUnifiedNativeAdDataObject *nativeAdObject;
@property(nonatomic, strong) GDTMobUnifiedNativeAdCustomView *gdtCustomView;
- (instancetype)initWithGDTNativeAd:(GDTUnifiedNativeAdDataObject *)nativeAdObject unifiedNativeAdView:(GDTUnifiedNativeAdView *)gdtUnifiedNativeAdView;

@end

NS_ASSUME_NONNULL_END

