

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

@class TradPlusUnitManager;
@interface TradPlusAdUnitCache : NSObject

//yes = 有过期缓存
- (BOOL)checkAllCacheExpired;

- (void)addWaterfallCacheItem:(TradPlusAdWaterfallItem *)item;

//确认当前waterfallItem是否有缓存
- (void)checkCacheWithItem:(TradPlusAdWaterfallItem *)item;

- (void)checkWaterfall:(NSArray <TradPlusAdWaterfallItem *>*)waterfallArray;

- (NSInteger)getWaterfallCacheCount;
- (NSInteger)getAllCacheCount;
- (TradPlusAdWaterfallItem *)checkAllCacheLimit;

//清理缓存
- (void)clearAllCache;
//清理低于指定底价的 waterfall 缓存（不清理 bidding/C2S），返回是否有 bidding 广告缓存
- (BOOL)clearCacheWithBidPrice:(CGFloat)bidPrice currency:(TPBidPriceCurrency)currency;
/// 清理低于指定底价的缓存（含 waterfall、bidding/C2S，按 ecpm/value/value_cny 比价），返回是否有 bidding 广告缓存
- (BOOL)clearCacheWithBidPriceIncludingBidding:(CGFloat)bidPrice currency:(TPBidPriceCurrency)currency;

//获取一个缓存并移除缓存
- (TradPlusAdWaterfallItem *)getAllCacheItemAndRemove;
//获取一个缓存并移除缓存 不进行频次检测
- (TradPlusAdWaterfallItem *)getNoCheckAllCacheItemAndRemove;
- (TradPlusAdWaterfallItem *)getAllCacheItem;
- (TradPlusAdWaterfallItem *)getNoCheckAllCacheItem;
//获取缓存中第一个对象的引用
- (TradPlusAdWaterfallItem *)getWaterfallCacheFirstItem;
- (TradPlusAdWaterfallItem *)getWaterfallCacheWithAdSourceID:(NSString *)adSourceID;
- (void)removeWaterfallItem:(TradPlusAdWaterfallItem *)item;
- (NSArray *)getBiddingValueArray:(NSArray <TradPlusAdWaterfallItem *>*)biddingArray;

- (void)startCheckExpire;
- (void)stopCheckExpire;
- (void)checkAllCacheExpiredAndReload;
//是否有独占广告缓存
- (BOOL)hasExclusiveCache;
//兜底广告
- (BOOL)hasBottomAdCache;
- (void)addBottomAdCacheItem:(TradPlusAdWaterfallItem *)item;
- (TradPlusAdWaterfallItem *)getBottomAd;

@property (nonatomic,copy)NSString *placementID;
@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@end
