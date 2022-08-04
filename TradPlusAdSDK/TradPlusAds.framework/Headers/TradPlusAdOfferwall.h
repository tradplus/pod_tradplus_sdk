#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/MsCommon.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADOfferwallDelegate;

@interface TradPlusAdOfferwall : NSObject

/// 设置广告位ID 默认开启自动加载模式
- (void)setAdUnitID:(NSString *)adUnitID;

///  设置广告位ID
/// @param adUnitID 广告位ID
/// @param isAutoLoad  是否开启自动加载模式
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///加载广告
- (void)loadAd;

/// 显示广告
/// @param sceneId 场景ID 可以为nil
- (void)showAdWithSceneId:(nullable NSString *)sceneId;

/// 显示广告
/// @param rootViewController rootViewController
/// 当传入nil时SDK会自行获取key windows 的 rootViewController
/// @param sceneId 场景ID 可以为nil
- (void)showAdFromRootViewController:(nullable UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

/// 进入广告场景
/// @param sceneId 场景ID 可以为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

///设置用户id
- (void)setUserId:(NSString *)userId;

///获取当前余额 从callback中获取balance
- (void)getCurrencyBalance;

///扣除用户积分墙积分
- (void)spendCurrency:(int)amount;

///添加用户积分墙积分
- (void)awardCurrency:(int)amount;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,weak) id <TradPlusADOfferwallDelegate> delegate;
@end


@protocol TradPlusADOfferwallDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpOfferwallAdLoaded:(NSDictionary *)adInfo;

///AD加载失败
///tpOfferwallAdOneLayerLoaded:didFailWithError：返回三方源的错误信息
- (void)tpOfferwallAdLoadFailWithError:(NSError *)error;

///AD展现
- (void)tpOfferwallAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpOfferwallAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击
- (void)tpOfferwallAdClicked:(NSDictionary *)adInfo;

///AD关闭
- (void)tpOfferwallAdDismissed:(NSDictionary *)adInfo;

///userID 设置结束 error = nil 成功
- (void)tpOfferwallSetUserIdFinish:(NSError *)error;

///用户当前积分墙积分数量
- (void)tpOfferwallGetCurrencyBalance:(NSDictionary *)response error:(NSError *)error;

//扣除用户积分墙积分回调
- (void)tpOfferwallSpendCurrency:(NSDictionary *)response error:(NSError *)error;

//添加用户积分墙积分回调
- (void)tpOfferwallAwardCurrency:(NSDictionary *)response error:(NSError *)error;

@optional

///开始加载流程
- (void)tpOfferwallAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
- (void)tpOfferwallAdOneLayerStartLoad:(NSDictionary *)adInfo;

///当每个广告源加载成功后会都会回调一次。
- (void)tpOfferwallAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpOfferwallAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpOfferwallAdAllLoaded:(BOOL)success;
@end
NS_ASSUME_NONNULL_END
