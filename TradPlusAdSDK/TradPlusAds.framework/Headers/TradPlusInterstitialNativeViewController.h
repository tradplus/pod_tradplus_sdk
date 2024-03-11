//
//  TradPlusInterstitialNativeViewController.h
//  TradPlusAds
//
//  Created by xuejun on 2024/2/23.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusInterstitialNativeViewController : UIViewController

@property (nonatomic,weak)IBOutlet UIView *fullScreenAdView;
@property (nonatomic,weak)IBOutlet UIView *halfScreenAdView;
@property (nonatomic,assign)BOOL didStart;
@property (nonatomic,weak)TradPlusAdWaterfallItem *item;
@property (nonatomic,assign)UIInterfaceOrientation statusBarOrientation;
@property (nonatomic,strong)UIButton *closeButton;
@property (nonatomic,copy)void (^didLayoutSubviewsAct)(void);
@property (nonatomic,copy)void (^closeAct)(void);
@end

NS_ASSUME_NONNULL_END
