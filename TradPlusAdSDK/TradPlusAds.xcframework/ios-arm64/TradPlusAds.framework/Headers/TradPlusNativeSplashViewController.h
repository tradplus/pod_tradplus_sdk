//
//  TradPlusNativeSplashViewController.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/18.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusAds.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusNativeSplashViewController : UIViewController

- (void)clear;
- (void)showSkip;

@property (nonatomic,weak)IBOutlet UIView *adView;

@property (nonatomic,assign)BOOL isSkip;
@property (nonatomic,assign)BOOL callbackClose;
@property (nonatomic,assign)BOOL removeOnDidAppear;
@property (nonatomic,assign)NSInteger countdownTime;
@property (nonatomic,assign)NSInteger skipTime;
@property (nonatomic,strong)TradPlusNativeRenderer *renderer;
@property (nonatomic,strong)TradPlusAdWaterfallItem *item;

@property (nonatomic,copy)void (^skipAct)(BOOL isClose);
@property (nonatomic,copy)void (^closeAct)(void);
@property (nonatomic,copy)void (^showSkipButton)(void);
@property (nonatomic,copy)void (^callbackCountDown)(NSInteger count);
@property (nonatomic,copy)void (^didLayoutSubviewsAct)(void);
@property (nonatomic,copy)void (^removeAct)(void);
@end
NS_ASSUME_NONNULL_END
