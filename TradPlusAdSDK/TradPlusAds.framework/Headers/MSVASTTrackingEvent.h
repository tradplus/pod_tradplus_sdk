#import <Foundation/Foundation.h>
#import "MSVASTModel.h"

@class MSVASTDurationOffset;

extern NSString * const MSVASTTrackingEventTypeCreativeView;
extern NSString * const MSVASTTrackingEventTypeStart;
extern NSString * const MSVASTTrackingEventTypeFirstQuartile;
extern NSString * const MSVASTTrackingEventTypeMidpoint;
extern NSString * const MSVASTTrackingEventTypeThirdQuartile;
extern NSString * const MSVASTTrackingEventTypeComplete;
extern NSString * const MSVASTTrackingEventTypeMute;
extern NSString * const MSVASTTrackingEventTypeUnmute;
extern NSString * const MSVASTTrackingEventTypePause;
extern NSString * const MSVASTTrackingEventTypeRewind;
extern NSString * const MSVASTTrackingEventTypeResume;
extern NSString * const MSVASTTrackingEventTypeFullscreen;
extern NSString * const MSVASTTrackingEventTypeExitFullscreen;
extern NSString * const MSVASTTrackingEventTypeExpand;
extern NSString * const MSVASTTrackingEventTypeCollapse;
extern NSString * const MSVASTTrackingEventTypeAcceptInvitationLinear;
extern NSString * const MSVASTTrackingEventTypeCloseLinear;
extern NSString * const MSVASTTrackingEventTypeSkip;
extern NSString * const MSVASTTrackingEventTypeProgress;

@interface MSVASTTrackingEvent : MSVASTModel

@property (nonatomic, copy, readonly) NSString *eventType;
@property (nonatomic, copy, readonly) NSURL *URL;
@property (nonatomic, readonly) MSVASTDurationOffset *progressOffset;

@end
