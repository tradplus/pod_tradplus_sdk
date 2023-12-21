

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTModel.h>
#import <TradPlusAds/TPADXVideoEvent.h>

NS_ASSUME_NONNULL_BEGIN

@class TPADXVASTDurationOffset;

/**
 VAST video tracking event.
 */
@interface TPADXVASTTrackingEvent : TPADXVASTModel
/**
 Type of video event that is associated with the `URL`.
 */
@property (nonatomic, nullable, copy, readonly) TPADXVideoEvent eventType;

/**
 Tracking URL.
 */
@property (nonatomic, copy, readonly) NSURL *URL;

/**
 Optional progress offset indicating when the tracking URL should be fired.
 @note This field only applies to `TPADXVideoEventProgress`; otherwise this will be `nil`.
 */
@property (nonatomic, nullable, readonly) TPADXVASTDurationOffset *progressOffset;

@property (nonatomic,assign)BOOL didReport;

#pragma mark - Initialization

/**
 Initializes an instance of a VAST video event tracker.
 @param eventType Type of video event that is associated with the `URL`.
 @param url Tracking event URL.
 @param progressOffset Optional progress offset indicating when the tracking URL should be fired. This field only applies to `TPADXVideoEventProgress`; otherwise this should be `nil`.
 @return A tracker instance if successful; otherwise `nil` in the event the `URL` is invalid.
 */
- (instancetype _Nullable)initWithEventType:(TPADXVideoEvent)eventType
                                        url:(NSURL *)url
                             progressOffset:(TPADXVASTDurationOffset * _Nullable)progressOffset;

#pragma mark - Unavailable

// Use the designated initializer instead
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
