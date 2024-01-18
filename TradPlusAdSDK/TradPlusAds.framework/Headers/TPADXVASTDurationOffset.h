

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTModel.h>

typedef NS_ENUM(NSUInteger, TPADXVASTDurationOffsetType) {
    TPADXVASTDurationOffsetTypeAbsolute,
    TPADXVASTDurationOffsetTypePercentage,
};

@interface TPADXVASTDurationOffset : TPADXVASTModel

@property (nonatomic, readonly) TPADXVASTDurationOffsetType type;
@property (nonatomic, copy, readonly) NSString *offset;

- (NSTimeInterval)timeIntervalForVideoWithDuration:(NSTimeInterval)duration;

@end
