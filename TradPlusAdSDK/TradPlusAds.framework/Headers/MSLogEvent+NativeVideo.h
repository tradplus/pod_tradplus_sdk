#import <UIKit/UIKit.h>

#import "MSLogEvent.h"

typedef NS_ENUM(NSInteger, MSNativeVideoEventType) {
    MSNativeVideoEventTypeDownloadStart,
    MSNativeVideoEventTypeVideoReady,
    MSNativeVideoEventTypeBuffering,
    MSNativeVideoEventTypeDownloadFinished,
    MSNativeVideoEventTypeErrorFailedToPlay,
    MSNativeVideoEventTypeErrorDuringPlayback,
};

@interface MSLogEvent (NativeVideo)

- (instancetype)initWithLogEventProperties:(MSAdConfigurationLogEventProperties *)logEventProperties nativeVideoEventType:(MSNativeVideoEventType)nativeVideoEventType;

@end
