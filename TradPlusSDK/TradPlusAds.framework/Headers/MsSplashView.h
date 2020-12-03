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

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAd;
- (void)showAdInKeyWindow:(UIWindow *)window;

- (NSString *)getLoadDetailInfo;
@end

@protocol MsSplashViewDelegate <NSObject>
@optional
- (void)MsSplashViewLoaded:(MsSplashView *)adView;
- (void)MsSplashView:(MsSplashView *)adView didFailWithError:(NSError *)error;
- (void)MsSplashViewClicked:(MsSplashView *)adView;
- (void)MsSplashViewShown:(MsSplashView *)adView;
- (void)MsSplashViewDismissed:(MsSplashView *)adView;
@end
NS_ASSUME_NONNULL_END
