//
//  MSBReplayView.h
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MeetSocialPlayerView.h"

@class MeetSocialReplayView;

typedef void (^MSBReplayActionBlock)(MeetSocialReplayView *replayView);

@interface MeetSocialReplayView : UIView

@property (nonatomic, copy) MSBReplayActionBlock actionBlock;

- (instancetype)initWithFrame:(CGRect)frame displayMode:(MeetSocialPlayerDisplayMode)displayMode;

@end
