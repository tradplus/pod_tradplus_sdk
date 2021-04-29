//
//  MSVASTManager.h
//  AdExpress
//
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSVASTResponse.h"

typedef enum {
    MSVASTErrorXMLParseFailure,
    MSVASTErrorExceededMaximumWrapperDepth,
    MSVASTErrorNoAdsFound
} MSVASTError;

@interface MSVASTManager : NSObject

+ (void)fetchVASTWithURL:(NSURL *)URL completion:(void (^)(MSVASTResponse *, NSError *))completion;
+ (void)fetchVASTWithData:(NSData *)data completion:(void (^)(MSVASTResponse *, NSError *))completion;

@end