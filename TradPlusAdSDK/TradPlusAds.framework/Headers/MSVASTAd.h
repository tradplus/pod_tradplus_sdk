#import <Foundation/Foundation.h>
#import "MSVASTModel.h"

@class MSVASTInline;
@class MSVASTWrapper;

@interface MSVASTAd : MSVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, readonly) MSVASTInline *inlineAd;
@property (nonatomic, readonly) MSVASTWrapper *wrapper;

@end
