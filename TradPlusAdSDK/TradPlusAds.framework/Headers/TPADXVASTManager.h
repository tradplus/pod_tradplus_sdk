
#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTResponse.h>

@interface TPADXVASTManager : NSObject

+ (void)fetchVASTWithData:(NSData *)data completion:(void (^)(TPADXVASTResponse *, NSError *))completion;
@end
