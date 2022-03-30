

#import <Foundation/Foundation.h>
#import "TPADXVASTModel.h"

#import "TPADXVASTAd.h"
#import "TPADXVASTCompanionAd.h"
#import "TPADXVASTCreative.h"
#import "TPADXVASTDurationOffset.h"
#import "TPADXVASTIndustryIcon.h"
#import "TPADXVASTInline.h"
#import "TPADXVASTLinearAd.h"
#import "TPADXVASTMediaFile.h"
#import "TPADXVASTResource.h"
#import "TPADXVASTTrackingEvent.h"
#import "TPADXVASTWrapper.h"

NS_ASSUME_NONNULL_BEGIN

/**
 VAST ad response representing the root of the VAST document.
 */
@interface TPADXVASTResponse : TPADXVASTModel
/**
 Available ads.
 */
@property (nonatomic, nullable, readonly) NSArray<TPADXVASTAd *> *ads;

/**
 Error tracking URLs to fire upon receiving a "no ad" response.
 */
@property (nonatomic, nullable, readonly) NSArray<NSURL *> *errorURLs;

/**
 VAST document version.
 */
@property (nonatomic, nullable, copy, readonly) NSString *version;

@end

NS_ASSUME_NONNULL_END
