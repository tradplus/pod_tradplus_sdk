//
//  TPADXNativeVideoView.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/26.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXResourceData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXNativeVideoView : UIView

- (void)play;
@property (nonatomic,weak)TPADXResourceData *resourceData;

@property (nonatomic, copy) void (^playFailAct)(NSError *error);
///type : 0 = video  1 = endcard
@property (nonatomic, copy) void (^clickAct)(NSInteger type,NSTimeInterval videoTime);
@end

NS_ASSUME_NONNULL_END
