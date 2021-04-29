//
//  NSHTTPURLResponse+MSAdditions.h
//  MsSDK
//
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const gTradPlusAdHTTPHeaderContentType;

@interface NSHTTPURLResponse (MSAdditions)

- (NSStringEncoding)stringEncodingFromContentType:(NSString *)contentType;

@end
