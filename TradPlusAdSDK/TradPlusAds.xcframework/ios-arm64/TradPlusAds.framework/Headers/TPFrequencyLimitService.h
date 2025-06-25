//
//  TPFrequencyLimitService.h
//  TestFrequencyLimit
//
//  Created by xuejun on 2022/3/15.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPFrequencyLimitService : NSObject

+ (TPFrequencyLimitService *)sharedInstance;
//YES = noLimit
- (BOOL)noLimitWithCapUnitId:(NSString *)capUnitId frequency:(NSDictionary *)frequency;
- (void)saveShowTimeWithItem:(TradPlusAdWaterfallItem *)item;
- (void)addShowTimeWithCapUnitId:(NSString *)capUnitId;

//展示频限
- (BOOL)noLimitWithPlatformID:(NSString *)platformID;
- (void)setAdsourceImpConfig:(NSArray *)adsourceImpConfig;
- (void)setPlatformLimitList:(NSArray *)list;
- (void)clearAdsourceImpConfig;

//请求频限
- (BOOL)noLimitRequestWithItem:(TradPlusAdWaterfallItem *)item;
- (void)saveRequestTimeWithItem:(TradPlusAdWaterfallItem *)item;
- (void)setRequestConfig:(NSArray *)adsourceRequestConfig;
- (void)clearRequestConfig;

//广告源展示频制
- (BOOL)noLimitImpressionWithItem:(TradPlusAdWaterfallItem *)item;
- (void)saveImpressionTimeWithItem:(TradPlusAdWaterfallItem *)item;
- (void)setImpDayConfig:(nullable NSArray *)dayConfig hourConfig:(nullable NSArray *)hourConfig spacConfig:(nullable NSArray *)spacConfig;
- (void)clearImpressionConfig;
@end

NS_ASSUME_NONNULL_END
