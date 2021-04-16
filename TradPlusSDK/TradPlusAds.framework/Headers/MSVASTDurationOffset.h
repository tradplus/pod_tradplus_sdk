#import <Foundation/Foundation.h>
#import "MSVASTModel.h"

typedef NS_ENUM(NSUInteger, MSVASTDurationOffsetType) {
    MSVASTDurationOffsetTypeAbsolute,
    MSVASTDurationOffsetTypePercentage,
};

@interface MSVASTDurationOffset : MSVASTModel

@property (nonatomic, readonly) MSVASTDurationOffsetType type;
@property (nonatomic, copy, readonly) NSString *offset;

- (NSTimeInterval)timeIntervalForVideoWithDuration:(NSTimeInterval)duration;

@end
