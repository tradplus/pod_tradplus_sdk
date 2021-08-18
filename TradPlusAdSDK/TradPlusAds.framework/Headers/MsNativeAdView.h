//  原生／高级原生广告
//  MsNativeAdViewController.h
//  AdExpress
//
//  Created by tx on 16/8/30.
//  Copyright © 2016年 tx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MsNativeAdViewDelegate;

@interface MsNativeAdView : UIView

//- (instancetype)initWithPlacement:(NSString *)placementID;
- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAd;
/// @param sceneId 场景ID
- (void)loadAd:(nullable NSString *)sceneId;

//模版渲染类型的广告 可以设置在load成功后不进行渲染 后续手动调用render方法
- (void)loadAdWithTemplateNativeNotRender;
/// @param sceneId 场景ID
- (void)loadAdWithTemplateNativeNotRender:(nullable NSString *)sceneId;
- (void)templateNativeRender:(CGSize)size;

//设置本地策略 首次启动时不用从TradPlus后台拉取策略
- (void)setStrategy:(NSString *)base64Strategy;/// 进入广告场景
/// @param sceneId 场景ID
- (void)entryAdScenario:(nullable NSString *)sceneId;

- (NSString *)getLoadDetailInfo;

@property (nonatomic, weak, nullable) id<MsNativeAdViewDelegate> delegate;
@property (nonatomic, strong) Class renderingViewClass; //高级原生，自定义布局时提供布局类
@property (nonatomic, strong) Class renderingViewClassInMobi; //inmobi专用，加载广告前设置。
@property (nonatomic, strong) NSString *channelName;
//@property (nonatomic, readonly) BOOL isNetWorkAdReady;
//相关回调时可以访问到的具体渠道信息。
@property (nonatomic, strong) NSMutableDictionary *dicChannelInfo;

//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic, assign) BOOL isAdLoading;
@property (nonatomic, assign) BOOL isAdReady;
@end

@protocol MsNativeAdViewDelegate <NSObject>
@required
- (UIViewController *)viewControllerForPresentingModalView;

@optional
- (void)nativeAdLoaded:(MsNativeAdView *)nativeAd;
- (void)nativeAd:(MsNativeAdView *)nativeAd didFailWithError:(NSError *)error;
- (void)nativeAdImpression:(MsNativeAdView *)nativeAd; //展示回调
- (void)nativeAdClicked:(MsNativeAdView *)nativeAd;    //点击回调

- (void)nativeAdBidStart:(MsNativeAdView *)nativeAd;
- (void)nativeAdBidEnd:(MsNativeAdView *)nativeAd;
- (void)nativeAdLoadStart:(MsNativeAdView *)nativeAd;
- (void)nativeAdAllLoaded:(MsNativeAdView *)nativeAd;
@end

NS_ASSUME_NONNULL_END
