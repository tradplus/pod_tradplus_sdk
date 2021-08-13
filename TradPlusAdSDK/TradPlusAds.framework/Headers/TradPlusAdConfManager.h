
#import <Foundation/Foundation.h>
#import "TradPlusAdConfModel.h"


@interface TradPlusAdConfManager : NSObject

+(TradPlusAdConfManager *)sharedInstance;


/// 获取配置信息
/// @param placementId 广告位ID
/// @param segmentTag 流量分组tag
/// @param dicUserInfo 流量分组数据
/// @param callback 状态数据
- (void)loadConfWithPlacementId:(NSString *)placementId segmentTag:(NSString *)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo callback:(void (^)(TradPlusAdConfModel *confModel))callback;

///测试
- (void)reloadConfWithPlacementId:(NSString *)placementId segmentTag:(NSString *)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo callback:(void (^)(TradPlusAdConfModel *confModel))callback;
@end
