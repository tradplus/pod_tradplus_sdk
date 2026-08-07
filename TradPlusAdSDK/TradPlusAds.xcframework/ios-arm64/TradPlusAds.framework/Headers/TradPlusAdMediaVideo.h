//
//  TradPlusAdMediaVideo.h
//  TradPlusAds
//
//  Created by Even on 2023/2/16.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/MsCommon.h>
#import <TradPlusAds/TradPlusMediaVideoAdObject.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADMediaVideoDelegate;

@interface TradPlusAdMediaVideo : NSObject

/// 设置广告位ID
/// @param adUnitID  广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;


///加载广告 v12.2.0新增 无需传入绑定UIView，
///加载完成可通过TradPlusMediaVideoAdObject 获取adView来展示
- (void)loadAdWithRootViewController:(nullable UIViewController *)viewController mute:(BOOL)mute;
- (void)loadAdWithRootViewController:(nullable UIViewController *)viewController mute:(BOOL)mute maxWaitTime:(NSTimeInterval)maxWaitTime;
///v12.2.0新增 返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///加载广告
///adContainer 绑定的UIView
- (void)loadAd:(UIView *)adContainer viewController:(UIViewController *)viewController mute:(BOOL)mute;
- (void)loadAd:(UIView *)adContainer viewController:(UIViewController *)viewController mute:(BOOL)mute maxWaitTime:(NSTimeInterval)maxWaitTime;

/// 进入广告场景
/// @param sceneId 场景ID 没有则设置为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

- (void)openAutoLoadCallback;

///v10.0.0 新增接口可传入contentPlayhead（需符合IMA的IMAContentPlayhead协议）
@property (nonatomic,strong)id contentPlayhead;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@property (nonatomic, readonly) BOOL isAdReady;

@property (nonatomic,weak) id <TradPlusADMediaVideoDelegate> delegate;

- (nullable TradPlusMediaVideoAdObject *)getReadyMediaVideoObject;

//用户设置本地配置
@property (nullable,nonatomic, strong)NSDictionary *localParams;
@end

@protocol TradPlusADMediaVideoDelegate <NSObject>

@optional

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpMediaVideoAdLoaded:(NSDictionary *)adInfo;

///AD加载失败
///tpMediaVideoAdOneLayerLoad:didFailWithError：返回三方源的错误信息
- (void)tpMediaVideoAdLoadFailWithError:(NSError *)error;
///v11.8.0新增,同tpMediaVideoAdLoadFailWithError:,两个回调任选其一
- (void)tpMediaVideoAdLoadFailWithError:(NSError *)error adInfo:(NSDictionary *)adInfo;

///AD播放开始
- (void)tpMediaVideoAdStart:(NSDictionary *)adInfo;

///AD播放失败
- (void)tpMediaVideoAdError:(NSDictionary *)adInfo error:(NSError *)error;

///AD被点击
- (void)tpMediaVideoAdClicked:(NSDictionary *)adInfo;

///播放结束
- (void)tpMediaVideoAdEnd:(NSDictionary *)adInfo;

///开始加载流程
- (void)tpMediaVideoAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
- (void)tpMediaVideoAdOneLayerStartLoad:(NSDictionary *)adInfo;

///调用load之后如果收到此回调，说明广告位仍处于加载状态，无法触发新的一轮广告加载。
- (void)tpMediaVideoAdIsLoading:(NSDictionary *)adInfo;

///当每个广告源加载成功后会都会回调一次。
- (void)tpMediaVideoAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpMediaVideoAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///bidding开始
- (void)tpMediaVideoAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpMediaVideoAdBidEnd:(NSDictionary *)adInfo error:(nullable NSError *)error;

///加载流程全部结束
- (void)tpMediaVideoAdAllLoaded:(BOOL)success;
///v11.8.0新增,同tpMediaVideoAdAllLoaded:,两个回调任选其一
- (void)tpMediaVideoAdAllLoaded:(BOOL)success adInfo:(NSDictionary *)adInfo;

///广告的播放进度
- (void)tpMediaVideoAdDidProgress:(NSDictionary *)adInfo mediaTime:(NSTimeInterval)mediaTime totalTime:(NSTimeInterval)totalTime;

///暂停播放
- (void)tpMediaVideoAdPause:(NSDictionary *)adInfo;

///继续播放
- (void)tpMediaVideoAdResume:(NSDictionary *)adInfo;

///跳过
- (void)tpMediaVideoAdSkiped:(NSDictionary *)adInfo;

///点击
- (void)tpMediaVideoAdTapped:(NSDictionary *)adInfo;

///v9.4.0新增  返回IMA各事件 event IMA为 IMAAdEvent 事件对象
- (void)tpMediaVideoAdEvent:(id)event adInfo:(NSDictionary *)adInfo;

///v9.4.0新增  返回IMA StartBuffering事件
- (void)tpMediaVideoAdDidStartBuffering:(NSDictionary *)adInfo;

///v9.4.0新增  返回IMA adDidBufferToMediaTime事件
- (void)tpMediaVideoAdDidBufferToMediaTime:(NSTimeInterval)mediaTime adInfo:(NSDictionary *)adInfo;

///v9.4.0新增 返回IMA PlaybackReady事件
- (void)tpMediaVideoAdPlaybackReady:(NSDictionary *)adInfo;

/// 10.0.0新增 返回IMA RequestContentPause事件
- (void)tpMediaVideoAdRequestContentPause:(NSDictionary *)adInfo;

/// 10.0.0新增 返回IMA RequestContentResume事件
- (void)tpMediaVideoAdRequestContentResume:(NSDictionary *)adInfo;

/// 10.0.0新增 返回IMA kIMAAdEvent_AD_BREAK_READY事件
- (void)tpMediaVideoAdBreakReady:(NSDictionary *)adInfo;
@end

NS_ASSUME_NONNULL_END
