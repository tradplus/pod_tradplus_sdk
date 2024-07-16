#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/MsCommon.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADOfferwallDelegate;

@interface TradPlusAdOfferwall : NSObject

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///加载广告
- (void)loadAd;
- (void)loadAdWithMaxWaitTime:(NSTimeInterval)maxWaitTime;

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

- (void)openAutoLoadCallback;

//用于开发者在广告展示前设置透传的自定义数据，SDK将在展示后的相关回调中返回。
//开发者可通过 key：customAdInfo 获取。adInfo[@"customAdInfo"]
@property (nonatomic, strong)NSDictionary *customAdInfo;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,weak) id <TradPlusADOfferwallDelegate> delegate;

//用户设置本地配置
@property (nullable,nonatomic, strong)NSDictionary *localParams;
@end


@protocol TradPlusADOfferwallDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpOfferwallAdLoaded:(NSDictionary *)adInfo;

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
- (void)tpOfferwallGetCurrencyBalance:(NSDictionary *)response error:(nullable NSError *)error;

//扣除用户积分墙积分回调
- (void)tpOfferwallSpendCurrency:(NSDictionary *)response error:(nullable NSError *)error;

//添加用户积分墙积分回调
- (void)tpOfferwallAwardCurrency:(NSDictionary *)response error:(nullable NSError *)error;

@optional

///AD加载失败
///tpOfferwallAdOneLayerLoaded:didFailWithError：返回三方源的错误信息
- (void)tpOfferwallAdLoadFailWithError:(NSError *)error;
///v11.8.0新增,同tpOfferwallAdLoadFailWithError:,两个回调任选其一
- (void)tpOfferwallAdLoadFailWithError:(NSError *)error adInfo:(NSDictionary *)adInfo;

///开始加载流程
- (void)tpOfferwallAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
- (void)tpOfferwallAdOneLayerStartLoad:(NSDictionary *)adInfo;

///当每个广告源加载成功后会都会回调一次。
- (void)tpOfferwallAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpOfferwallAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///v8.7.0+新增
///调用load之后如果收到此回调，说明广告位仍处于加载状态，无法触发新的一轮广告加载。
- (void)tpOfferwallAdIsLoading:(NSDictionary *)adInfo;

///加载流程全部结束
- (void)tpOfferwallAdAllLoaded:(BOOL)success;
///v11.8.0新增,同tpOfferwallAdAllLoaded:,两个回调任选其一
- (void)tpOfferwallAdAllLoaded:(BOOL)success adInfo:(NSDictionary *)adInfo;
@end
NS_ASSUME_NONNULL_END
