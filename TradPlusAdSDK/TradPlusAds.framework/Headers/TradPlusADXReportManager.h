//
//  TradPlusADXReportManager.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/20.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXResourceData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusADXReportManager : NSObject
//加载失败
+ (void)loadMediaFileWithError:(NSError *)error
                  resourceData:(TPADXResourceData *)resourceData;
//播放失败
+ (void)playFailWithWithError:(NSError *)error
                 resourceData:(TPADXResourceData *)resourceData;
+ (void)videoStartWithResourceData:(TPADXResourceData *)resourceData;
//点击
+ (void)videoClickWithResourceData:(TPADXResourceData *)resourceData
                   videoTimeOffset:(NSTimeInterval)videoTimeOffset;
+ (void)endCardClickWithResourceData:(TPADXResourceData *)resourceData;
+ (void)endCardDidReadyWithResourceData:(TPADXResourceData *)resourceData;
//播放事件
+ (void)videoReportWithVideoEvent:(TPADXVideoEvent)videoEvent resourceData:(TPADXResourceData *)resourceData videoTimeOffset:(NSTimeInterval)videoTimeOffset;

+ (void)reportWithEventArray:(NSArray <TPADXVASTTrackingEvent *>*)eventArray
             videoTimeOffset:(NSTimeInterval)videoTimeOffset
               videoAssetURL:(NSString *)videoAssetURL
                       error:(nullable NSError *)error;

+ (void)reportWithURLArray:(NSArray <NSString *>*)urlArray;

+ (nullable NSArray <NSURL *>*)getVideoClickWithResourceData:(TPADXResourceData *)resourceData videoTimeOffset:(NSTimeInterval)videoTimeOffset;
+ (nullable NSArray <NSURL *>*)getEndCardClickWithResourceData:(TPADXResourceData *)resourceData;
+ (nullable NSArray <NSURL *>*)getPlayStartWithResourceData:(TPADXResourceData *)resourceData;
@end

NS_ASSUME_NONNULL_END
