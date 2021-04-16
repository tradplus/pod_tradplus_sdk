#import <Foundation/Foundation.h>
#import "MSVASTModel.h"

@class MSVASTDurationOffset;

@interface MSVASTLinearAd : MSVASTModel

@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray *clickTrackingURLs;
@property (nonatomic, readonly) NSArray *customClickURLs;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) NSArray *industryIcons;
@property (nonatomic, readonly) NSArray *mediaFiles;
@property (nonatomic, readonly) MSVASTDurationOffset *skipOffset;
@property (nonatomic, readonly) NSDictionary *trackingEvents;

@end
