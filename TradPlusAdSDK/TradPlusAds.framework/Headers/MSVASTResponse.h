#import <Foundation/Foundation.h>
#import "MSVASTModel.h"

#import "MSVASTAd.h"
#import "MSVASTCompanionAd.h"
#import "MSVASTCreative.h"
#import "MSVASTDurationOffset.h"
#import "MSVASTIndustryIcon.h"
#import "MSVASTInline.h"
#import "MSVASTLinearAd.h"
#import "MSVASTMediaFile.h"
#import "MSVASTResource.h"
#import "MSVASTTrackingEvent.h"
#import "MSVASTWrapper.h"

@interface MSVASTResponse : MSVASTModel

@property (nonatomic, readonly) NSArray *ads;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, copy, readonly) NSString *version;

@end
