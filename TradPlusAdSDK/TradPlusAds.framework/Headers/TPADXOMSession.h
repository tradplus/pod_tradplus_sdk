//
//  TPADXOMSession.h
//  TradPlusAds
//
//  Created by xuejun on 2023/5/26.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

typedef enum : NSUInteger {
    TPFriendlyObstructionMediaControls,
    TPFriendlyObstructionCloseAd,
    TPFriendlyObstructionNotVisible,
    TPFriendlyObstructionOther
} TPFriendlyObstructionType;

NS_ASSUME_NONNULL_BEGIN

@interface TPADXOMSession : NSObject

- (void)setupWithWebView:(WKWebView *)webView;
- (void)setupWithResource:(NSArray *)resource isVideo:(BOOL)isVideo;
- (void)setMainAdView:(UIView *)view;
- (void)addFriendlyView:(UIView *)view type:(TPFriendlyObstructionType)type detailedReason:(nullable NSString *)reason;
- (void)start;
- (void)finish;

- (void)loaded;
- (void)vastLoadedWithSkipOffset:(CGFloat)skipOffset;
- (void)impression;
- (void)mediaClick;
- (void)mediaPause;
- (void)mediaResume;
- (void)mediaSkipped;
- (void)mediaComplete;
- (void)mediaStartWithDuration:(CGFloat)duration volume:(CGFloat)volume;
- (void)mediaFirstQuartile;
- (void)mediaMidpoint;
- (void)mediaThirdQuartile;
- (void)mediaBufferStart;
- (void)mediaBufferFinish;
- (void)mediaVolumeChangeTo:(CGFloat)playerVolume;
- (void)mediaPlayerStateChangeTo:(NSInteger)state;

@end

NS_ASSUME_NONNULL_END
