
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 To learn more about these events, please see VAST documentation:
    https://www.iab.com/wp-content/uploads/2015/06/VASTv3_0.pdf

 Note: for `TPADXVideoEventCloseLinear`("closeLinear"): the user clicked the close button on the
 creative. The name of this event distinguishes it from the existing “close” event described in the
 2008 IAB Digital Video In-Stream Ad Metrics Definitions, which defines the “close” metric as
 applying to non-linear ads only. The "closeLinear" event extends the “close” event for use in Linear
 creative.

 Since we don't know whether none, either, or both "close" or "closeLinear" are returned by the
 creative, we should look for both trackers when the user closes the video.
 */
typedef NSString * TPADXVideoEvent;

// keep this list sorted alphabetically
extern TPADXVideoEvent const TPADXVideoEventClick;
extern TPADXVideoEvent const TPADXVideoEventClose; // see note above about `TPADXVideoEventCloseLinear`
extern TPADXVideoEvent const TPADXVideoEventCloseLinear; // see note above about `TPADXVideoEventClose`
extern TPADXVideoEvent const TPADXVideoEventCollapse;
extern TPADXVideoEvent const TPADXVideoEventComplete;
extern TPADXVideoEvent const TPADXVideoEventCreativeView;
extern TPADXVideoEvent const TPADXVideoEventError;
extern TPADXVideoEvent const TPADXVideoEventExitFullScreen;
extern TPADXVideoEvent const TPADXVideoEventExpand;
extern TPADXVideoEvent const TPADXVideoEventFirstQuartile;
extern TPADXVideoEvent const TPADXVideoEventFullScreen;
extern TPADXVideoEvent const TPADXVideoEventImpression;
extern TPADXVideoEvent const TPADXVideoEventMidpoint;
extern TPADXVideoEvent const TPADXVideoEventMute;
extern TPADXVideoEvent const TPADXVideoEventPause;
extern TPADXVideoEvent const TPADXVideoEventProgress;
extern TPADXVideoEvent const TPADXVideoEventResume;
extern TPADXVideoEvent const TPADXVideoEventSkip;
extern TPADXVideoEvent const TPADXVideoEventStart;
extern TPADXVideoEvent const TPADXVideoEventThirdQuartile;
extern TPADXVideoEvent const TPADXVideoEventUnmute;

/**
 Provides class-level support for `TPADXVideoEvent` processing.
 */
@interface TPADXVideoEvents : NSObject

/**
 All available and supported `TPADXVideoEvent` types.
 */
@property (nonatomic, class, strong, readonly) NSSet<TPADXVideoEvent> *supported;

/**
 Queries if the inputted event string is a valid supported `TPADXVideoEvent` type.
 @param event Video event candidate string.
 @return `true` if valid; `false` otherwise.
 */
+ (BOOL)isSupportedEvent:(NSString *)event;

@end

NS_ASSUME_NONNULL_END
