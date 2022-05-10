

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

@class TradPlusUnitManager;
@interface TradPlusAdUnitCache : NSObject

//yes = 有过期缓存
- (BOOL)checkCacheExpired;

- (void)addCacheItem:(TradPlusAdWaterfallItem *)item;

- (void)checkWaterfall:(NSArray <TradPlusAdWaterfallItem *>*)waterfallArray;

- (NSInteger)getCacheCount;
- (TradPlusAdWaterfallItem *)checkCacheLimit;

//清理缓存
- (void)clearCache;

//获取一个缓存并移除缓存
- (TradPlusAdWaterfallItem *)getCacheItemAndRemove;
//获取一个缓存并移除缓存 不进行频次检测
- (TradPlusAdWaterfallItem *)getNoCheckCacheItemAndRemove;
- (TradPlusAdWaterfallItem *)getCacheItem;
//获取缓存中第一个对象的引用
- (TradPlusAdWaterfallItem *)getCacheFirstItem;
- (TradPlusAdWaterfallItem *)getCacheWithAdSourceID:(NSString *)adSourceID;
- (void)removeItem:(TradPlusAdWaterfallItem *)item;
- (NSArray *)getBiddingValueArray:(NSArray <TradPlusAdWaterfallItem *>*)biddingArray;

- (void)startCheckExpire;
- (void)stopCheckExpire;
- (void)checkCacheExpiredAndReload;

@property (nonatomic,copy)NSString *placementID;
@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@end
