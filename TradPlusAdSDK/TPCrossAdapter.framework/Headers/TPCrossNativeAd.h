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
- (void)registerContainer:(UIView *)containerView
       withClickableViews:(NSArray<UIView *> *_Nullable)clickableViews;

@property (nonatomic,weak) id <TPCrossNativeAdDelegate> delegate;
@property (nonatomic,weak) UIViewController *rootViewController;
@property (nonatomic,assign)BOOL isMute;
@end

@protocol TPCrossNativeAdDelegate <NSObject>

- (void)ADXLoadFinish:(TPCrossNativeData *)nativeData mediaView:(UIView *_Nullable)mediaView;
- (void)ADXLoadFailWithError:(NSError *)error;
- (void)ADXImpression;
- (void)ADXShowFailWithError:(NSError *)error;
- (void)ADXClicked;
@end

NS_ASSUME_NONNULL_END
