#import <TradPlusAds/MSNativeAdAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface KuaiShouNativeExpressAdAdapter : NSObject  <MSNativeAdAdapter>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;
- (instancetype)initWithPlacementId:(NSString *)placementId;

@end

NS_ASSUME_NONNULL_END

