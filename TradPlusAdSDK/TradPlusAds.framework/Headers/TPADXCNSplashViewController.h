//
//  TPADXCNSplashViewController.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/4.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXResourceData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNSplashViewController : UIViewController

@property (nonatomic,weak)TPADXResourceData *resourceData;
@property (nonatomic,weak)UIView *bottomView;
@property (nonatomic,assign)UIInterfaceOrientationMask orientationMask;

@property (nonatomic, copy) void (^impressionAct)(void);
@property (nonatomic, copy) void (^showFailAct)(NSError *error);
@property (nonatomic, copy) void (^clickAct)(BOOL canOpen);
@property (nonatomic, copy) void (^closeAct)(void);
@end

NS_ASSUME_NONNULL_END
