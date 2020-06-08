//
//  MeetSocialAVPlayer.h
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

@class MeetSocialAVPlayer;

@protocol MeetSocialAVPlayerDelegate <NSObject>

- (void)avPlayer:(MeetSocialAVPlayer *)player didError:(NSError *)error withMessage:(NSString *)message;

- (void)avPlayer:(MeetSocialAVPlayer *)player playbackTimeDidProgress:(NSTimeInterval)currentPlaybackTime;

- (void)avPlayerDidFinishPlayback:(MeetSocialAVPlayer *)player;

- (void)avPlayerDidRecoverFromStall:(MeetSocialAVPlayer *)player;

- (void)avPlayerDidStall:(MeetSocialAVPlayer *)player;

@end


@interface MeetSocialAVPlayer : AVPlayer

// Indicates the duration of the player item.
@property (nonatomic, readonly) NSTimeInterval currentItemDuration;

// Returns the current time of the current player item.
@property (nonatomic, readonly) NSTimeInterval currentPlaybackTime;

- (id)initWithDelegate:(id<MeetSocialAVPlayerDelegate>)delegate playerItem:(AVPlayerItem *)playerItem;

- (void)dispose;

@end
