
#import <Foundation/Foundation.h>
#import "TradPlusUnitManager.h"
#import "MSReachability.h"

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdManager : NSObject

+ (TradPlusAdManager *)sharedInstance;
- (BOOL)hasUnitManagerWithPlacementID:(NSString *)placementID;
- (TradPlusUnitManager *)getUnitManagerWithPlacementID:(NSString *)placementID;

- (void)startCheckExpire;
- (void)stopCheckExpire;
- (void)checkExpiredAd;

@property (nonatomic,strong)dispatch_queue_t tradPlusAdManagerQueue;
@property (nonatomic,strong)dispatch_queue_t tradPlusTimerQueue;
@property (nonatomic) MSReachability *reachability;

@end

NS_ASSUME_NONNULL_END
