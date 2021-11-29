//
//  TradPlusAdBanner.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/24.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

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

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@property (nonatomic,weak) id <TradPlusADBannerDelegate> delegate;

@end

@protocol TradPlusADBannerDelegate <NSObject>

- (UIViewController *)viewControllerForPresentingModalView;
///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpBannerAdLoaded:(NSDictionary *)adInfo;
///AD加载失败
- (void)tpBannerAdLoadFailWithError:(NSError *)error;
///AD展现
- (void)tpBannerAdImpression:(NSDictionary *)adInfo;
///AD展现失败
- (void)tpBannerAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///AD被点击 
- (void)tpBannerAdClicked:(NSDictionary *)adInfo;

@optional
///bidding开始
- (void)tpBannerAdBidStart:(NSDictionary *)adInfo;
///bidding结束
- (void)tpBannerAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success;
///开始加载
- (void)tpBannerAdLoadStart:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载成功后会都会回调一次。
- (void)tpBannerAdOneLayerLoaded:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载失败后会都会回调一次。
- (void)tpBannerAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///加载流程全部结束
- (void)tpBannerAdAllLoaded:(BOOL)success;
//用户主动关闭是时的回调 GDTMOB Pangle(需要自行处理)
- (void)tpBannerAdClose:(NSDictionary *)adInfo;
@end

NS_ASSUME_NONNULL_END
