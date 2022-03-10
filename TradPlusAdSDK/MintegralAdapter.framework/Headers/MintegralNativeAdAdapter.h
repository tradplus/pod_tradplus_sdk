#import <TradPlusAds/MSNativeAdAdapter.h>


@class MTGNativeAdManager;
@class MTGBidNativeAdManager;

extern NSString *const kMTGVideoAdsEnabledKey;

@interface MintegralNativeAdAdapter : NSObject <MSNativeAdAdapter>
@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) NSArray *nativeAds;
@property (nonatomic, assign)BOOL videoMute;

- (instancetype)initWithNativeAds:(NSArray *)nativeAds nativeAdManager:(MTGNativeAdManager *)nativeAdManager bidAdManager:(MTGBidNativeAdManager *)bidAdManager withUnitId:(NSString *)unitId;

@end
