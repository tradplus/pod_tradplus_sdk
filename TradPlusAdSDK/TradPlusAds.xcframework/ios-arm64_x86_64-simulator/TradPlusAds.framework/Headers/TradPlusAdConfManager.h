
#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdConfModel.h>


@interface TradPlusAdConfManager : NSObject

+(TradPlusAdConfManager *)sharedInstance;
/// 设置本地配置信息
/// @param configInfo 本地配置信息
/// @param placementId 广告位ID
- (void)setLocalConfig:(NSString *)configInfo placementId:(NSString *)placementId;
- (NSDictionary *)getLocalConfDictionaryWithPlacementId:(NSString *)placementId;
- (void)reloadConfWithPlacementId:(NSString *)placementId segmentTag:(NSString *)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo callback:(void (^)(TradPlusAdConfModel *confModel))callback;
@end
