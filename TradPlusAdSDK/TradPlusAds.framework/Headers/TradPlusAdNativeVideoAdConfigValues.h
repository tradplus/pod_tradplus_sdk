//
//  TradPlusAdNativeVideoAdConfigValues.h
//  MsSDK
//
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TradPlusAdNativeVideoAdConfigValues : NSObject

@property (nonatomic, readonly) NSInteger playVisiblePercent;
@property (nonatomic, readonly) NSInteger pauseVisiblePercent;
@property (nonatomic, readonly) NSInteger impressionMinVisiblePercent;
@property (nonatomic, readonly) NSTimeInterval impressionVisible;
@property (nonatomic, readonly) NSTimeInterval maxBufferingTime;

- (instancetype)initWithPlayVisiblePercent:(NSInteger)playVisiblePercent
                       pauseVisiblePercent:(NSInteger)pauseVisiblePercent
               impressionMinVisiblePercent:(NSInteger)impressionMinVisiblePercent
                         impressionVisible:(NSTimeInterval)impressionVisible
                                 maxBufferingTime:(NSTimeInterval)maxBufferingTime;
- (BOOL)isValid;

@end