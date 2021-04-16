#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSVASTModel.h"

@class MSVASTDurationOffset;
@class MSVASTResource;

@interface MSVASTIndustryIcon : MSVASTModel

@property (nonatomic, copy, readonly) NSString *program;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, copy, readonly) NSString *xPosition;
@property (nonatomic, copy, readonly) NSString *yPosition;

@property (nonatomic, copy, readonly) NSString *apiFramework;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) MSVASTDurationOffset *offset;

@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray *clickTrackingURLs;
@property (nonatomic, readonly) NSArray *viewTrackingURLs;

@property (nonatomic, readonly) MSVASTResource *HTMLResource;
@property (nonatomic, readonly) MSVASTResource *iframeResource;
@property (nonatomic, readonly) MSVASTResource *staticResource;

@end
