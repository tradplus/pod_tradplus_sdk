//
//  TradPlusNativeSplashViewController.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/18.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusNativeSplashViewController : UIViewController

- (void)clear;

@property (nonatomic,weak)IBOutlet UIView *adView;

@property (nonatomic,assign)BOOL isSkip;
@property (nonatomic,assign)NSInteger countdownTime;
@property (nonatomic,assign)NSInteger skipTime;

@property (nonatomic,copy)void (^skipAct)(void);
@property (nonatomic,copy)void (^closeAct)(void);
@property (nonatomic,copy)void (^showSkipButton)(void);
@property (nonatomic,copy)void (^callbackCountDown)(NSInteger count);
@property (nonatomic,copy)void (^didLayoutSubviewsAct)(void);
@end

NS_ASSUME_NONNULL_END
