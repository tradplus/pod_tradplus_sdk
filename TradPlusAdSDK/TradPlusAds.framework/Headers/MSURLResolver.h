//
//  MSURLResolver.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/MSGlobal.h>
#import <TradPlusAds/MSURLActionInfo.h>

typedef void (^MSURLResolverCompletionBlock)(MSURLActionInfo *actionInfo, NSError *error);

@interface MSURLResolver : NSObject <NSURLConnectionDataDelegate>

+ (instancetype)resolverWithURL:(NSURL *)URL completion:(MSURLResolverCompletionBlock)completion;
- (void)start;
- (void)cancel;

@end
