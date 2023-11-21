//
//  TPADXCountdownView.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/19.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCountdownView : UIView

- (void)setup;
- (void)startPlay;
- (void)clear;
- (void)countDownStart;
- (void)countDownStop;
- (void)skip;

@property (nonatomic,assign)NSInteger videoTime;
@property (nonatomic,assign)NSInteger showSkipTime;
@property (nonatomic,assign)BOOL noShowSkip;
@property (nonatomic,assign)CGFloat scale;

@property (nonatomic,assign)BOOL isSplash;
@property (nonatomic,assign)NSInteger splashSkipTime;

@property (nonatomic, copy) void (^showCloseButtonAct)(void);
@property (nonatomic, copy) void (^showEndCardCloseButtonAct)(void);
@property (nonatomic, copy) void (^countDownFinish)(void);

//开屏倒计时结束关闭
@property (nonatomic, copy) void (^closeAct)(void);

@end

NS_ASSUME_NONNULL_END
