

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXVASTDurationOffset.h>
#import <TradPlusAds/TPADXVASTModel.h>
#import <TradPlusAds/TPADXVASTResource.h>

@interface TPADXVASTIndustryIcon : TPADXVASTModel

@property (nonatomic, copy, readonly) NSString *program;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, copy, readonly) NSString *xPosition;
@property (nonatomic, copy, readonly) NSString *yPosition;

@property (nonatomic, copy, readonly) NSString *apiFramework;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) TPADXVASTDurationOffset *offset;

@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray<NSURL *> *clickTrackingURLs;
@property (nonatomic, readonly) NSArray<NSURL *> *viewTrackingURLs;

/**
 Return best @c TPADXVASTResource that should be displayed. Per VAST specification
 
 Side effect: The @c type of the returned @c TPADXVASTResource is determined and assigned.
 */
- (TPADXVASTResource *)resourceToDisplay;

@end
