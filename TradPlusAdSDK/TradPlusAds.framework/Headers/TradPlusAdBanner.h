//
//  TradPlusAdBanner.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/24.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/MsCommon.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADBannerDelegate;

@interface TradPlusAdBanner : UIView

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;

///是否为自动展示模式 默认 YES
@property (nonatomic,assign)BOOL autoShow;

/// 加载广告
/// @param sceneId 场景ID 没有则设置为nil 用于自动展示模式下
- (void)loadAdWithSceneId:(nullable NSString *)sceneId;

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

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@property (nonatomic,weak) id <TradPlusADBannerDelegate> delegate;

//三方banner的对其方式 默认：TPBannerContentModeTop
@property (nonatomic,assign)TPBannerContentMode bannerContentMode;

@property (nonatomic,readonly)BOOL isAutoRefresh;
@end

@protocol TradPlusADBannerDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpBannerAdLoaded:(NSDictionary *)adInfo;

///AD加载失败
///tpBannerAdOneLayerLoad:didFailWithError：返回三方源的错误信息
- (void)tpBannerAdLoadFailWithError:(NSError *)error;

///AD展现
- (void)tpBannerAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpBannerAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击 
- (void)tpBannerAdClicked:(NSDictionary *)adInfo;

@optional

///为三方提供rootviewController 用于点击广告后的操作
- (nullable UIViewController *)viewControllerForPresentingModalView;

///v7.6.0+新增 开始加载流程
- (void)tpBannerAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpBannerAdLoadStart:(NSDictionary *)adInfo;
- (void)tpBannerAdOneLayerStartLoad:(NSDictionary *)adInfo;

///bidding开始
- (void)tpBannerAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpBannerAdBidEnd:(NSDictionary *)adInfo error:(NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpBannerAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpBannerAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpBannerAdAllLoaded:(BOOL)success;

///三方关闭按钮触发时的回调
- (void)tpBannerAdClose:(NSDictionary *)adInfo;

///以下回调接口已废弃v7.6.0+
- (void)tpBannerAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpBannerAdBidEnd:error:");
- (void)tpBannerAdLoadStart:(NSDictionary *)adInfo DEPRECATED_MSG_ATTRIBUTE("Please use tpBannerAdOneLayerStartLoad:");

@end

NS_ASSUME_NONNULL_END
