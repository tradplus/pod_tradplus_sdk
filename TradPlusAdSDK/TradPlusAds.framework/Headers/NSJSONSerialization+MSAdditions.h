//
//  NSJSONSerialization+MSAdditions.h
//  AdExpress
//
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSJSONSerialization (MSAdditions)

+ (id)mp_JSONObjectWithData:(NSData *)data options:(NSJSONReadingOptions)opt clearNullObjects:(BOOL)clearNulls error:(NSError **)error;

@end
