#import <TradPlusAds/MSNativeAdAdapter.h>

@class FBNativeAdBase;

@interface FacebookNativeAdAdapter : NSObject <MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) FBNativeAdBase *fbNativeAdBase;

- (instancetype)initWithFBNativeAdBase:(FBNativeAdBase *)fbNativeAdBase adProperties:(NSDictionary *)adProps;

@end
