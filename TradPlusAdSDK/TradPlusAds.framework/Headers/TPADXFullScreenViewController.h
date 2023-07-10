//
//  TPADXFullScreenViewController.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/19.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXResourceData.h>
#import <TradPlusAds/TPADXVideoView.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXFullScreenViewController : UIViewController

@property (nonatomic,strong)TPADXVideoView *videoView;
@property (nonatomic,assign)BOOL isSplash;
@property (nonatomic,assign)BOOL isNative;
@property (nonatomic,assign)BOOL isRewardVideo;
@property (nonatomic,assign)BOOL didReward;
@property (nonatomic,weak)TPADXResourceData *resourceData;
@property (nonatomic,assign)UIInterfaceOrientationMask orientations;
@property (nonatomic,assign)UIInterfaceOrientation presentationOrientation;

@property (nonatomic, copy) void (^impressionAct)(void);
@property (nonatomic, copy) void (^showFailAct)(NSError *error);

///type : 0 = video  1 = endcard  2 = image
@property (nonatomic, copy) void (^clickAct)(BOOL canOpen,NSInteger type,NSTimeInterval videoTime);
@property (nonatomic, copy) void (^closeAct)(void);
@property (nonatomic, copy) void (^rewardedAct)(void);
@property (nonatomic, copy) void (^videoCompleteAct)(BOOL didSkip);

@end

NS_ASSUME_NONNULL_END
