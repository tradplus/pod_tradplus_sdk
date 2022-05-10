

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTModel.h>
#import <TradPlusAds/TPADXVideoEvent.h>

@class TPADXVASTDurationOffset;
@class TPADXVASTIndustryIcon;
@class TPADXVASTMediaFile;
@class TPADXVASTTrackingEvent;

NS_ASSUME_NONNULL_BEGIN

@interface TPADXVASTLinearAd : TPADXVASTModel

/**
 Optional click through URL.
 */
@property (nonatomic, nullable, readonly) NSURL *clickThroughURL;

/**
 Optional array of click tracking URLs.
 */
@property (nonatomic, nullable, readonly) NSArray<NSURL *> *clickTrackingURLs;

/**
 Optional array of custom video click URLs.
 */
@property (nonatomic, nullable, readonly) NSArray<NSURL *> *customClickURLs;

/**
 Required duration of the Linear ad.
 */
@property (nonatomic, readonly) NSTimeInterval duration;

/**
 Optional array of industry icons.
 */
@property (nonatomic, nullable, readonly) NSArray<TPADXVASTIndustryIcon *> *industryIcons;

/**
 Array of media files associated with the Linear ad. This may be `nil` if there are no media files.
 */
@property (nonatomic, nullable, readonly) NSArray<TPADXVASTMediaFile *> *mediaFiles;

/**
 Optional time value that identifies when skip controls are made available to the end user.
 */
@property (nonatomic, nullable, readonly) TPADXVASTDurationOffset *skipOffset;

/**
 Optional table of tracking events for the Linear ad. This will be `nil` if there are no tracking events.
 */
@property (nonatomic, nullable, readonly) NSDictionary<TPADXVideoEvent, NSArray<TPADXVASTTrackingEvent *> *> *trackingEvents;

@end

NS_ASSUME_NONNULL_END
