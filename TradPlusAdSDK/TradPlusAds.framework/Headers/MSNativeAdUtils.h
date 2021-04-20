//
//  MSNativeAdUtils.h
//  MsSDK
//
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSTimeInterval const gUpdateVisibleCellsInterval;

@interface MSNativeAdUtils : NSObject

+ (BOOL)addURLString:(NSString *)urlString toURLArray:(NSMutableArray *)urlArray;

@end
