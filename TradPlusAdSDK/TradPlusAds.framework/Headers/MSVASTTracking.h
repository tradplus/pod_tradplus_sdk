#import <Foundation/Foundation.h>

@class MSVideoConfig;

typedef NS_ENUM(NSUInteger, MSVideoEventType) {
    MSVideoEventTypeTimeUpdate = 0,
    MSVideoEventTypeMuted,
    MSVideoEventTypeUnmuted,
    MSVideoEventTypePause,
    MSVideoEventTypeResume,
    MSVideoEventTypeFullScreen,
    MSVideoEventTypeExitFullScreen,
    MSVideoEventTypeExpand,
    MSVideoEventTypeCollapse,
    MSVideoEventTypeCompleted,
    MSVideoEventTypeImpression,
    MSVideoEventTypeClick,
    MSVideoEventTypeError
};

@interface MSVASTTracking : NSObject

@property (nonatomic, readonly) MSVideoConfig *videoConfig;
@property (nonatomic) NSTimeInterval videoDuration;

- (instancetype)initWithMPVideoConfig:(MSVideoConfig *)videoConfig videoView:(UIView *)videoView;
- (void)handleVideoEvent:(MSVideoEventType)videoEventType videoTimeOffset:(NSTimeInterval)timeOffset;
- (void)handleNewVideoView:(UIView *)videoView;

@end
