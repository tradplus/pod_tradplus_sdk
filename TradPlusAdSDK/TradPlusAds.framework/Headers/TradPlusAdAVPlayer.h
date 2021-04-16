#import <AVFoundation/AVFoundation.h>

@class TradPlusAdAVPlayer;

@protocol TradPlusAdAVPlayerDelegate <NSObject>

- (void)avPlayer:(TradPlusAdAVPlayer *)player didError:(NSError *)error withMessage:(NSString *)message;

- (void)avPlayer:(TradPlusAdAVPlayer *)player playbackTimeDidProgress:(NSTimeInterval)currentPlaybackTime;

- (void)avPlayerDidFinishPlayback:(TradPlusAdAVPlayer *)player;

- (void)avPlayerDidRecoverFromStall:(TradPlusAdAVPlayer *)player;

- (void)avPlayerDidStall:(TradPlusAdAVPlayer *)player;

@end


@interface TradPlusAdAVPlayer : AVPlayer

// Indicates the duration of the player item.
@property (nonatomic, readonly) NSTimeInterval currentItemDuration;

// Returns the current time of the current player item.
@property (nonatomic, readonly) NSTimeInterval currentPlaybackTime;

- (id)initWithDelegate:(id<TradPlusAdAVPlayerDelegate>)delegate playerItem:(AVPlayerItem *)playerItem;

- (void)dispose;

@end
