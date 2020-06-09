//
//  MSAVPlayerView.h
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVPlayer;

@interface MeetSocialAVPlayerView : UIView

@property (nonatomic) AVPlayer *player;
@property (nonatomic) NSString *videoGravity;

@end
