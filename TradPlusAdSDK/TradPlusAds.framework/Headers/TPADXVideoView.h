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

- (void)userPauseAct;
- (void)userResumeAct;
- (void)setup;
- (void)play;
- (void)pause;
- (void)skip;
- (void)close;
- (BOOL)checkRewarded;
- (void)startCheck;
- (void)finishCheck;
- (void)timeOut;

@property (nonatomic,weak)TPADXResourceData *resourceData;
@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,assign)BOOL isNative;
//0=准备 1=播放中 2=播放完 3= 播放失败 4=播放关闭
@property (nonatomic,assign)NSInteger playStatus;
@property (nonatomic,readonly)NSTimeInterval currentTime;
@property (nonatomic,assign)BOOL useVideoStreaming;

@property (nonatomic, copy) void (^startPlayAct)(void);
@property (nonatomic, copy) void (^impressionAct)(void);
@property (nonatomic, copy) void (^clickAct)(NSTimeInterval videoTime);
@property (nonatomic, copy) void (^playFailedAct)(NSError *error);
@property (nonatomic, copy) void (^playFinishAct)(BOOL didSkip);
@property (nonatomic, copy) void (^playRewardedAct)(void);

@property (nonatomic, copy) void (^stopCountDown)(void);
@property (nonatomic, copy) void (^startCountDown)(void);

@property (nonatomic, copy) void (^pauseCallback)(void);
@property (nonatomic, copy) void (^resumeCallback)(void);

@property (nonatomic, copy) void (^playedTimeCallback)(NSTimeInterval currentTime,NSTimeInterval duration);

@property (nonatomic, copy) void (^startBuffering)(void);
@property (nonatomic, copy) void (^didBufferToMediaTime)(NSTimeInterval mediaTime);
@property (nonatomic, copy) void (^playbackReady)(void);
@end

NS_ASSUME_NONNULL_END
