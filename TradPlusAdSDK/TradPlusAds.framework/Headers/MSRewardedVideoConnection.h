@class MSRewardedVideoConnection;

@protocol MSRewardedVideoConnectionDelegate <NSObject>

- (void)rewardedVideoConnectionCompleted:(MSRewardedVideoConnection *)connection url:(NSURL *)url;

@end

@interface MSRewardedVideoConnection : NSObject

- (instancetype)initWithUrl:(NSURL *)url delegate:(id<MSRewardedVideoConnectionDelegate>)delegate;
- (void)sendRewardedVideoCompletionRequest;

@end
