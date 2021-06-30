#import <BUAdSDK/BUNativeAd.h>
#import <TradPlusAds/MSNativeAdAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface PangleNativeAdAdapter : NSObject  <MSNativeAdAdapter>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;
@property (nonatomic, strong) NSString *notifyStr;
- (instancetype)initWithBUNativeAd:(BUNativeAd *)nativeAd placementId:(NSString *)placementId;

@end

NS_ASSUME_NONNULL_END

