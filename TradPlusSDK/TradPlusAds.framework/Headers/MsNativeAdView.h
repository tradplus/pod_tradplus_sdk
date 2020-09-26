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
- (NSString *)getLoadDetailInfo;

@property (nonatomic, weak, nullable) id<MsNativeAdViewDelegate> delegate;
@property (nonatomic, strong) Class renderingViewClass; //高级原生，自定义布局时提供布局类
@property (nonatomic, strong) NSString *channelName;
@property (nonatomic, readonly) BOOL isNetWorkAdReady;

@end

@protocol MsNativeAdViewDelegate <NSObject>
@required
- (UIViewController *)viewControllerForPresentingModalView;

@optional
- (void)nativeAdLoaded:(MsNativeAdView *)nativeAd;
- (void)nativeAd:(MsNativeAdView *)nativeAd didFailWithError:(NSError *)error;
- (void)nativeAdClicked:(MsNativeAdView *)nativeAd;
@end

NS_ASSUME_NONNULL_END
