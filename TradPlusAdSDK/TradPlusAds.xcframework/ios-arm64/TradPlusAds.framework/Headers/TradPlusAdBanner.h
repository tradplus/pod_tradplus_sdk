//
//  TradPlusAdBanner.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/24.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/MsCommon.h>
#import <TradPlusAds/TradPlusNativeRenderer.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADBannerDelegate;

@interface TradPlusAdBanner : UIView

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;

///是否为自动展示模式 默认 YES
@property (nonatomic,assign)BOOL autoShow;

/// v8.4.0新增
/// 指定原生横幅的渲染模版 未设置时SDK会使用默认模版进行渲染
/// customRenderingViewClass 仅对Waterfall中的原生广告生效 
@property (nonatomic,strong,nullable)Class customRenderingViewClass;

/// 加载广告
/// @param sceneId 场景ID 没有则设置为nil 用于自动展示模式下
- (void)loadAdWithSceneId:(nullable NSString *)sceneId;
- (void)loadAdWithSceneId:(nullable NSString *)sceneId maxWaitTime:(NSTimeInterval)maxWaitTime;

/// 展示广告
/// @param sceneId 场景ID 没有则设置为nil
- (void)showWithSceneId:(nullable NSString *)sceneId;

/// 进入广告场景
/// @param sceneId 场景ID 没有则设置为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

///设置banner尺寸 ，需在load前设置（百度 Pangle）
- (void)setBannerSize:(CGSize)size;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///获取三方渠道广告对象
- (nullable id)getBannerAd;

- (void)openAutoLoadCallback;

//用于开发者在广告展示前设置透传的自定义数据，SDK将在展示后的相关回调中返回。
//开发者可通过 key：customAdInfo 获取。adInfo[@"customAdInfo"]
@property (nonatomic, strong)NSDictionary *customAdInfo;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@property (nonatomic,weak) id <TradPlusADBannerDelegate> delegate;

//三方banner的对其方式 默认：TPBannerContentModeTop
@property (nonatomic,assign)TPBannerContentMode bannerContentMode;

@property (nonatomic,readonly)BOOL isAutoRefresh;

//用户设置本地配置
@property (nullable,nonatomic, strong)NSDictionary *localParams;
@end

@protocol TradPlusADBannerDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpBannerAdLoaded:(NSDictionary *)adInfo;

///AD展现
- (void)tpBannerAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpBannerAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击 
- (void)tpBannerAdClicked:(NSDictionary *)adInfo;

@optional

///AD加载失败
///tpBannerAdOneLayerLoad:didFailWithError：返回三方源的错误信息
- (void)tpBannerAdLoadFailWithError:(NSError *)error;
///v11.8.0新增,同tpBannerAdLoadFailWithError:,两个回调任选其一
- (void)tpBannerAdLoadFailWithError:(NSError *)error adInfo:(NSDictionary *)adInfo;

// v9.7.0
// 替代原 @property (nonatomic,strong,nullable)TradPlusNativeRenderer *customRenderer;
// 指定原生横幅的renderer 未设置时SDK会使用默认模版进行渲染
// customRenderer 仅对Waterfall中的原生广告生效
// 注：请不要强引用 customRenderer，这样会导致原生横幅无法释放。
- (nullable TradPlusNativeRenderer *)tpBannerCustomRenderer;

///为三方提供rootviewController 用于点击广告后的操作
- (nullable UIViewController *)viewControllerForPresentingModalView;

///v7.6.0+新增 开始加载流程
- (void)tpBannerAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpBannerAdLoadStart:(NSDictionary *)adInfo;
- (void)tpBannerAdOneLayerStartLoad:(NSDictionary *)adInfo;

///v8.7.0+新增
///调用load之后如果收到此回调，说明广告位仍处于加载状态，无法触发新的一轮广告加载。
- (void)tpBannerAdIsLoading:(NSDictionary *)adInfo;

///bidding开始
- (void)tpBannerAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpBannerAdBidEnd:(NSDictionary *)adInfo error:(nullable NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpBannerAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpBannerAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpBannerAdAllLoaded:(BOOL)success;
///v11.8.0新增,同tpBannerAdAllLoaded:,两个回调任选其一
- (void)tpBannerAdAllLoaded:(BOOL)success adInfo:(NSDictionary *)adInfo;

///三方关闭按钮触发时的回调
- (void)tpBannerAdClose:(NSDictionary *)adInfo;

///以下回调接口已废弃v7.6.0+
- (void)tpBannerAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpBannerAdBidEnd:error:");
- (void)tpBannerAdLoadStart:(NSDictionary *)adInfo DEPRECATED_MSG_ATTRIBUTE("Please use tpBannerAdOneLayerStartLoad:");

@end

NS_ASSUME_NONNULL_END
