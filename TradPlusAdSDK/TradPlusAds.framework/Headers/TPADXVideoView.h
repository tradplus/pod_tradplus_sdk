//
//  TPADXVideoView.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/19.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXResourceData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXVideoView : UIView

@property (nonatomic,copy)NSString *videoURL;

- (void)setup;
- (void)play;
- (void)pause;
- (void)skip;
- (void)close;

@property (nonatomic,weak)TPADXResourceData *resourceData;
@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,assign)BOOL isNative;

@property (nonatomic, copy) void (^startPlayAct)(void);
@property (nonatomic, copy) void (^impressionAct)(void);
@property (nonatomic, copy) void (^clickAct)(NSTimeInterval videoTime);
@property (nonatomic, copy) void (^playFailedAct)(NSError *error);
@property (nonatomic, copy) void (^playFinishAct)(void);
@property (nonatomic, copy) void (^playRewardedAct)(void);

@property (nonatomic, copy) void (^stopCountDown)(void);
@property (nonatomic, copy) void (^startCountDown)(void);
@end

NS_ASSUME_NONNULL_END
