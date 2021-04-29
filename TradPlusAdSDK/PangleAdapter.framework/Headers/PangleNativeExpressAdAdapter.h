#import <BUAdSDK/BUNativeExpressAdView.h>
#import <BUAdSDK/BUNativeExpressAdManager.h>
#import <TradPlusAds/MSNativeAdAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface PangleNativeExpressAdAdapter : NSObject  <MSNativeAdAdapter>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;
- (instancetype)initWithBUNativeExpressAdView:(BUNativeExpressAdManager *)nativeExpressAdManager placementId:(NSString *)placementId;

@end

NS_ASSUME_NONNULL_END

