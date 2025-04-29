#ifndef TPVideoPlayer_h
#define TPVideoPlayer_h

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TPVideoPlayerEvent) {
    TPVideoPlayerEvent_ClickThrough,
    TPVideoPlayerEvent_Close,
    TPVideoPlayerEvent_Skip,
    TPVideoPlayerEvent_Pause,
    TPVideoPlayerEvent_Resume
};

@protocol TPVideoPlayer <NSObject>

- (instancetype)initWithVideoURL:(NSURL *)videoURL;
- (void)loadVideo;
- (void)playVideo;
- (void)pauseVideo;
- (void)stopVideo;

@end

NS_ASSUME_NONNULL_END

#endif /* TPVideoPlayer_h */
