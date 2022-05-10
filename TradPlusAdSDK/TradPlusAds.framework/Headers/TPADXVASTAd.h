

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTModel.h>

@class TPADXVASTInline;
@class TPADXVASTWrapper;

@interface TPADXVASTAd : TPADXVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, readonly) TPADXVASTInline *inlineAd;
@property (nonatomic, readonly) TPADXVASTWrapper *wrapper;

@end
