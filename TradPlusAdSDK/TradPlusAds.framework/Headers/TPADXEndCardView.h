//
//  TPADXEndCardView.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/21.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXResourceData.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXEndCardView : UIView

@property (nonatomic,weak)TPADXResourceData *resourceData;
@property (nonatomic,assign)BOOL isReady;

@property (nonatomic, copy) void (^clickAct)(void);
@end

NS_ASSUME_NONNULL_END
