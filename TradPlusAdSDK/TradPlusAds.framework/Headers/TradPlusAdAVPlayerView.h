//
//  MSAVPlayerView.h
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVPlayer;

@interface TradPlusAdAVPlayerView : UIView

@property (nonatomic) AVPlayer *player;
@property (nonatomic) NSString *videoGravity;

@end
