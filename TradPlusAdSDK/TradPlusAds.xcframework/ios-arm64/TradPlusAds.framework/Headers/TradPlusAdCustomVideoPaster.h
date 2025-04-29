//
//  TradPlusAdCustomVideoPaster.h
//  TradPlusAds
//
//  Created by xuejun on 2021/12/8.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdCustomVideoPaster : NSObject

- (instancetype)initWithWaterfallItem:(TradPlusAdWaterfallItem *)item;

@property (nonatomic,readonly)NSString *videoUrl;
@property (nonatomic,readonly)NSInteger videoDuration;

- (void)startPlayVideo;
- (void)didStartPlayVideoWithVideoDuration:(NSTimeInterval)duration;
- (void)didAutoStartPlayWithVideoDuration:(NSTimeInterval)duration;
- (void)didFinishVideo;
- (void)didPauseVideoWithCurrentDuration:(NSTimeInterval)duration;
- (void)didResumeVideoWithCurrentDuration:(NSTimeInterval)duration;
- (void)didBreakVideoWithCurrentDuration:(NSTimeInterval)duration;
- (void)didClickVideoViewWithCurrentDuration:(NSTimeInterval)duration;
- (void)didPlayFailedWithError:(NSError *)error;
- (void)didPlayStartFailedWithError:(NSError *)error;
- (void)didPlayBufferStart;
- (void)didPlayBufferEnd;
@end

NS_ASSUME_NONNULL_END
