//
//  TPCrossNativeAd.h
//  fluteSDKSample
//
//  Created by xuejun on 2024/1/4.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TPCrossBaseAd.h"
#import "TPCrossNativeData.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TPCrossNativeAdDelegate;

@interface TPCrossNativeAd : TPCrossBaseAd

- (void)loadAd;
- (void)registerTemplateView;
- (void)registerContainer:(UIView *)containerView
       withClickableViews:(NSArray<UIView *> *_Nullable)clickableViews;

@property (nonatomic,weak) id <TPCrossNativeAdDelegate> delegate;
@property (nonatomic,weak) UIViewController *rootViewController;
@property (nonatomic,assign)BOOL isMute;
@end

@protocol TPCrossNativeAdDelegate <NSObject>

- (void)crossTemplateLoadFinish:(UIView *)templateView;
- (void)crossLoadFinish:(TPCrossNativeData *)nativeData mediaView:(UIView *_Nullable)mediaView;
- (void)crossLoadFailWithError:(NSError *)error;
- (void)crossImpression;
- (void)crossShowFailWithError:(NSError *)error;
- (void)crossClicked;
- (void)crossClose;
@end

NS_ASSUME_NONNULL_END
