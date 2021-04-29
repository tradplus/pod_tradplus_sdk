//
//  MSVASTMacroProcessor.h
//  AdExpress
//
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSVASTMacroProcessor : NSObject

+ (NSURL *)macroExpandedURLForURL:(NSURL *)URL errorCode:(NSString *)errorCode;
+ (NSURL *)macroExpandedURLForURL:(NSURL *)URL errorCode:(NSString *)errorCode videoTimeOffset:(NSTimeInterval)timeOffset videoAssetURL:(NSURL *)videoAssetURL;

@end
