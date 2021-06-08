//
//  FluteVideoViewController.h
//  TradPlusSDKSample
//
//  Created by ms-mac on 2017/5/9.
//  Copyright © 2017年 TradPlusAd All rights reserved.
//

#import "MSInterstitialViewController.h"
#import "MSForceableOrientationProtocol.h"

@interface FluteVideoViewController : MSInterstitialViewController <MSForceableOrientationProtocol>

- (id)initWithAdConfiguration:(MSAdConfiguration *)configuration;
- (void)startLoading;

@end
