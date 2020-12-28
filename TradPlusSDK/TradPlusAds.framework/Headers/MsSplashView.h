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
@property (nonatomic) BOOL isAdReady;
@property (nonatomic, assign) NSTimeInterval adTimeoutInterval; //default 3s
//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

- (void)setAdUnitID:(NSString *)adUnitID;
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
- (void)MsSplashViewDismissed:(MsSplashView *)adView;
@end
NS_ASSUME_NONNULL_END
