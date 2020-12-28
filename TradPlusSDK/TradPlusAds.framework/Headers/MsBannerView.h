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

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAd;
- (NSString *)getLoadDetailInfo;
@end

@protocol MsBannerViewDelegate <NSObject>
@required
- (UIViewController *)viewControllerForPresentingModalView;

@optional

- (void)MsBannerViewLoaded:(MsBannerView *)adView;
- (void)MsBannerView:(MsBannerView *)adView didFailWithError:(NSError *)error;
- (void)MsBannerViewClicked:(MsBannerView *)adView;
@end
NS_ASSUME_NONNULL_END
