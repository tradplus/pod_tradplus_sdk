//
//  MSPlayerView.h
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MeetSocialAVPlayer.h"

@class MeetSocialPlayerView;

typedef NS_ENUM(NSUInteger, MeetSocialPlayerDisplayMode) {
    MeetSocialPlayerDisplayModeInline = 0,
    MeetSocialPlayerDisplayModeFullscreen
};

@protocol MeetSocialPlayerViewDelegate <NSObject>

- (void)playerViewDidTapReplayButton:(MeetSocialPlayerView *)view;
- (void)playerViewWillShowReplayView:(MeetSocialPlayerView *)view;
- (void)playerViewWillEnterFullscreen:(MeetSocialPlayerView *)view;

@end

@interface MeetSocialPlayerView : UIControl

@property (nonatomic) MeetSocialAVPlayer *avPlayer;
@property (nonatomic) MeetSocialPlayerDisplayMode displayMode;
@property (nonatomic, copy) NSString *videoGravity;

- (instancetype)initWithFrame:(CGRect)frame delegate:(id<MeetSocialPlayerViewDelegate>)delegate;

- (void)createPlayerView;
- (void)playbackTimeDidProgress;
- (void)playbackDidFinish;
- (void)setProgressBarVisible:(BOOL)visible;
- (void)handleVideoInitFailure;

@end
