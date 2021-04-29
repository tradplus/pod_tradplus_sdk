#import "GDTNativeExpressAd.h"
#import "GDTNativeExpressAdView.h"
#import <TradPlusAds/MSNativeAdAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface GDTMobNativeExpressAdAdapter : NSObject  <MSNativeAdAdapter>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;
- (instancetype)initWithNativeExpressAdView:(GDTNativeExpressAd *)nativeExpressAd placementId:(NSString *)placementId;

@end

NS_ASSUME_NONNULL_END

