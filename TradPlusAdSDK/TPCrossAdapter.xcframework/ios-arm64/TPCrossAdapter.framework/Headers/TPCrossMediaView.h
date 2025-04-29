//
//  TPCrossMediaView.h
//  fluteSDKSample
//
//  Created by xuejun on 2024/1/4.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TPCrossBaseAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface TPCrossMediaView : UIView

- (void)setupWithVideoURLStr:(NSString *)videoURLStr;
- (void)play;
- (void)clear;

@property (nonatomic,strong)NSString *videoPath;
@property (nonatomic,weak)TPCrossBaseAd *baseAd;
@property (nonatomic,assign)BOOL isMute;

@property (nonatomic, copy) void (^playFailAct)(NSError *error);
@end

NS_ASSUME_NONNULL_END
