

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

@class TradPlusUnitManager;
@interface TradPlusAdUnitCache : NSObject

//yes = 有过期缓存
- (BOOL)checkAllCacheExpired;

- (void)addWaterfallCacheItem:(TradPlusAdWaterfallItem *)item;

- (void)checkWaterfall:(NSArray <TradPlusAdWaterfallItem *>*)waterfallArray;

- (NSInteger)getWaterfallCacheCount;
- (NSInteger)getAllCacheCount;
- (TradPlusAdWaterfallItem *)checkAllCacheLimit;

//清理缓存
- (void)clearAllCache;

//获取一个缓存并移除缓存
- (TradPlusAdWaterfallItem *)getAllCacheItemAndRemove;
//获取一个缓存并移除缓存 不进行频次检测
- (TradPlusAdWaterfallItem *)getNoCheckAllCacheItemAndRemove;
- (TradPlusAdWaterfallItem *)getAllCacheItem;
//获取缓存中第一个对象的引用
- (TradPlusAdWaterfallItem *)getWaterfallCacheFirstItem;
- (TradPlusAdWaterfallItem *)getWaterfallCacheWithAdSourceID:(NSString *)adSourceID;
- (void)removeWaterfallItem:(TradPlusAdWaterfallItem *)item;
- (NSArray *)getBiddingValueArray:(NSArray <TradPlusAdWaterfallItem *>*)biddingArray;

- (void)startCheckExpire;
- (void)stopCheckExpire;
- (void)checkAllCacheExpiredAndReload;

//兜底广告
- (BOOL)hasWaterfallAdCache;
- (BOOL)hasBottomAdCache;
- (void)addBottomAdCacheItem:(TradPlusAdWaterfallItem *)item;
- (TradPlusAdWaterfallItem *)getBottomAd;

@property (nonatomic,copy)NSString *placementID;
@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@end
