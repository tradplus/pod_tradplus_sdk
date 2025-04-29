
@interface TradPlusBaseAdapter ()

- (void)startPlayVideo;
- (void)didStartPlayVideoWithVideoDuration:(NSTimeInterval)duration;
- (void)didAutoStartPlayWithVideoDuration:(NSTimeInterval)duration;
- (void)didFinishVideo;
- (void)didPauseVideoWithCurrentDuration:(NSTimeInterval)duration;
- (void)didResumeVideoWithCurrentDuration:(NSTimeInterval)duration;
- (void)didBreakVideoWithCurrentDuration:(NSTimeInterval)duration;
- (void)didClickVideoViewWithCurrentDuration:(NSTimeInterval)duration;
- (void)didPlayFailedWithError:(NSError *)error;
- (void)didPlayStartFailedWithError:(NSError *)error;
- (void)didPlayBufferStart;
- (void)didPlayBufferEnd;
@end



