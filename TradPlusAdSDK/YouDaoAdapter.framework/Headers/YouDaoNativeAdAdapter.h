#import "YDSDKHeader.h"
#import <TradPlusAds/MSNativeAdAdapter.h>

@class YDNativeAd;

@interface YouDaoNativeAdAdapter : NSObject <MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) YDNativeAd *ydNativeAd;

- (instancetype)initWithNativeAd:(YDNativeAd *)ydNativeAd adProperties:(NSDictionary *)adProps;

@end
