#import <Foundation/Foundation.h>
#import "MSVASTModel.h"

@class MSVASTLinearAd;

@interface MSVASTCreative : MSVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, copy, readonly) NSString *adID;
@property (nonatomic, readonly) MSVASTLinearAd *linearAd;
@property (nonatomic, readonly) NSArray *companionAds;

@end
