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

- (void)startPlay;
- (void)clear;
- (void)countDownStart;
- (void)countDownStop;
@property (nonatomic,assign)NSInteger videoTime;
@property (nonatomic,assign)NSInteger showSkipTime;
@property (nonatomic,assign)BOOL noShowSkip;
@property (nonatomic,assign)BOOL onlyShowClose;

@property (nonatomic, copy) void (^skipAct)(void);
@property (nonatomic, copy) void (^closeAct)(void);
@end

NS_ASSUME_NONNULL_END
