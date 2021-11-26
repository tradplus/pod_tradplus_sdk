//  横幅广告
//  MsBannerView.h
//  iMsSDK
//
//  Created by tx on 16/8/30.
//  Copyright © 2016年 tx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MsBannerViewDelegate;

@interface MsBannerView : UIView 
@property (nonatomic, weak, nullable) id<MsBannerViewDelegate> delegate;
@property (nonatomic, strong) NSString *channelName;
//相关回调时可以访问到的具体渠道信息。
@property (nonatomic, strong) NSMutableDictionary *dicChannelInfo;
//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@property (nonatomic, assign) BOOL isAdLoading;

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAd;
/// @param sceneId 场景ID
- (void)loadAd:(nullable NSString *)sceneId;
/// 进入广告场景
/// @param sceneId 场景ID
- (void)entryAdScenario:(nullable NSString *)sceneId;
- (NSString *)getLoadDetailInfo;
@end

@protocol MsBannerViewDelegate <NSObject>
@required
- (UIViewController *)viewControllerForPresentingModalView;

@optional

- (void)MsBannerViewLoaded:(MsBannerView *)adView;
- (void)MsBannerView:(MsBannerView *)adView didFailWithError:(NSError *)error;
- (void)MsBannerViewShown:(MsBannerView *)adView;
- (void)MsBannerViewClicked:(MsBannerView *)adView;
- (void)MsBannerViewClose:(MsBannerView *)adView;

- (void)MsBannerViewBidStart:(MsBannerView *)adView;
- (void)MsBannerViewBidEnd:(MsBannerView *)adView;
- (void)MsBannerViewLoadStart:(MsBannerView *)adView;
- (void)MsBannerViewAllLoaded:(MsBannerView *)adView;
@end
NS_ASSUME_NONNULL_END
