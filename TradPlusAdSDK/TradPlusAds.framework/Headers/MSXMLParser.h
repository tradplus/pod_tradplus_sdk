//
//  MSXMLParser.h
//  AdExpress
//
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSXMLParser : NSObject

- (NSDictionary *)dictionaryWithData:(NSData *)data error:(NSError **)error;

@end
