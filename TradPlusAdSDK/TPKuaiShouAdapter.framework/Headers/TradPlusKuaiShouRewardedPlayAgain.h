//
//  TradPlusKuaiShouRewardedPlayAgain.h
//  fluteSDKSample
//
//  Created by xuejun on 2022/1/4.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KSAdSDK/KSAdSDK.h>
#import "TradPlusKuaiShouRewardedAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusKuaiShouRewardedPlayAgain : NSObject<KSRewardedVideoAdDelegate>

@property (nonatomic,weak)TradPlusKuaiShouRewardedAdapter *rewardedAdapter;
@end

NS_ASSUME_NONNULL_END
