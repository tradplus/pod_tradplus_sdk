
#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdConfModel.h>


@interface TradPlusAdConfManager : NSObject

+(TradPlusAdConfManager *)sharedInstance;


/// 获取配置信息
/// @param placementId 广告位ID
/// @param segmentTag 流量分组tag
/// @param dicUserInfo 流量分组数据
/// @param callback 状态数据
- (void)loadConfWithPlacementId:(NSString *)placementId segmentTag:(NSString *)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo callback:(void (^)(TradPlusAdConfModel *confModel))callback;


/// 设置本地配置信息
/// @param configInfo 本地配置信息
/// @param placementId 广告位ID
- (void)setLocalConfig:(NSString *)configInfo placementId:(NSString *)placementId;
@end
