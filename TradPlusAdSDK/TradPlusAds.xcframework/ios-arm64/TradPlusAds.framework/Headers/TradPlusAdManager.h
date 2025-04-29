
#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUnitManager.h>
#import <TradPlusAds/MSReachability.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdManager : NSObject

+ (TradPlusAdManager *)sharedInstance;
- (BOOL)hasUnitManagerWithPlacementID:(NSString *)placementID;
- (TradPlusUnitManager *)getUnitManagerWithPlacementID:(NSString *)placementID;
- (void)setCustomDictionary:(nullable NSDictionary *)customDictionary  placementId:(NSString *)placementId;
- (void)setLocalParams:(nullable NSDictionary *)localParams placementId:(NSString *)placementId;
- (void)startCheckExpire;
- (void)stopCheckExpire;
- (void)checkExpiredAd;
- (void)clearCacheWithPlacementID:(NSString *)placementID;
- (void)clearShareCacheWithPlacementId:(NSString *)placementID;
- (void)startNetListener;
- (void)stopNetListener;

@property (nonatomic,strong)dispatch_queue_t tradPlusAdManagerQueue;
@property (nonatomic,strong)dispatch_queue_t tradPlusTimerQueue;
@property (nonatomic,strong)dispatch_queue_t tradPlusLoadEventQueue;
@property (nonatomic) MSReachability *reachability;
@property (nonatomic,readonly)NSMutableDictionary *placementCustomDictionary;
@property (nonatomic,readonly)NSMutableDictionary *placementLocalParams;
@end

NS_ASSUME_NONNULL_END
