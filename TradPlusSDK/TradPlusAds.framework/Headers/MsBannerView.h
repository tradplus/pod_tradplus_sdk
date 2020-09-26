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
@property (nonatomic, readonly) BOOL isNetWorkAdReady;

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
