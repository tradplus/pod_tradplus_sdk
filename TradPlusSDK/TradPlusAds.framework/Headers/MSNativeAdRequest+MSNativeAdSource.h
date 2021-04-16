#import "MSNativeAdRequest.h"

@interface MSNativeAdRequest (MSNativeAdSource)

- (void)startForAdSequence:(NSInteger)adSequence withCompletionHandler:(MSNativeAdRequestHandler)handler;

@end
