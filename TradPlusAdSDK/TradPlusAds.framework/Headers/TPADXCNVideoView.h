//
//  TPADXCNVideoView.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/6.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNVideoView : UIView

- (void)setupWithURL:(NSString *)url;
- (void)setMute:(BOOL)mute;
- (void)play;
- (void)pause;
- (void)close;

@property (nonatomic, copy) void (^startPlayAct)(void);
@property (nonatomic, copy) void (^oneQuarterPlayAct)(void);//25%
@property (nonatomic, copy) void (^oneHalfPlayAct)(void);//50%
@property (nonatomic, copy) void (^threeQuarterPlayAct)(void);//75%
@property (nonatomic, copy) void (^playFailedAct)(NSError *error);
@property (nonatomic, copy) void (^playFinishAct)(BOOL didSkip);
@end

NS_ASSUME_NONNULL_END
