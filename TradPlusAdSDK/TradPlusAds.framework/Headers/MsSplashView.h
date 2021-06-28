//  开屏广告
//  MsSplashView.h
//
//  Created by hy on 20/7/15.
//  Copyright © 2016年 hy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MsSplashViewDelegate;

@interface MsSplashView : UIView
@property (nonatomic, weak, nullable) id<MsSplashViewDelegate> delegate;
@property (nonatomic, strong) NSString *channelName;
//相关回调时可以访问到的具体渠道信息。
@property (nonatomic, strong) NSMutableDictionary *dicChannelInfo;
@property (nonatomic, assign) BOOL isAdReady;
@property (nonatomic, assign) NSTimeInterval adTimeoutInterval; //default 3s
//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
//穿山甲开屏底部预留空白的高度，可在show的时候customView传入对应高度的view，view的frame自行设置。
//default 0
@property (nonatomic, assign) int pangleBottomHeight;
@property (nonatomic, assign) BOOL isAdLoading;

- (void)setAdUnitID:(NSString *)adUnitID;

//设置本地策略 首次启动时不用从TradPlus后台拉取策略
- (void)setStrategy:(NSString *)base64Strategy;

- (void)loadAd;
//部分渠道 不支持customView 和skipView 将自动忽略这两个参数
- (void)showAdInKeyWindow:(UIWindow *)window customView:(nullable UIView *)customView skipView:(nullable UIView *)skipView;

- (NSString *)getLoadDetailInfo;
@end

@protocol MsSplashViewDelegate <NSObject>
@optional
- (void)MsSplashViewLoaded:(MsSplashView *)adView splashAd:(UIView *)splashAd;
- (void)MsSplashView:(MsSplashView *)adView didFailWithError:(NSError *)error;
- (void)MsSplashViewClicked:(MsSplashView *)adView;
- (void)MsSplashViewShown:(MsSplashView *)adView;
- (void)MsSplashViewCountdownToZero:(MsSplashView *)adView;
- (void)MsSplashViewDismissed:(MsSplashView *)adView;

- (void)MsSplashViewBidStart:(MsSplashView *)adView;
- (void)MsSplashViewBidEnd:(MsSplashView *)adView;
- (void)MsSplashViewLoadStart:(MsSplashView *)adView;
@end
NS_ASSUME_NONNULL_END
