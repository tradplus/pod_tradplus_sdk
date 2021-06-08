#import <KSAdSDK/KSAdSDK.h>
#import <TradPlusAds/MSNativeAdAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface KuaiShouNativeAdAdapter : NSObject  <MSNativeAdAdapter>

@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;
- (instancetype)initWithKSNativeAd:(KSNativeAd *)nativeAd placementId:(NSString *)placementId;

@end

NS_ASSUME_NONNULL_END

