//
//  TradPlusAdxNativeSplashView.h
//  TradPlusAds
//
//  Created by xuejun on 2023/2/17.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXResourceData.h>
#import <TradPlusAds/TradPlusAdxBaseView.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdxNativeSplashView : TradPlusAdxBaseView

@property(nonatomic,weak) IBOutlet UILabel *titleLabel;
@property(nonatomic,weak) IBOutlet UILabel *descLabel;
@property(nonatomic,weak) IBOutlet UILabel *actLabel;
@property(nonatomic,weak) IBOutlet UIImageView *mainImageView;
@property(nonatomic,weak) IBOutlet UIImageView *iconImageView;
@property(nonatomic,weak) IBOutlet NSLayoutConstraint *iconTopConstraint;
@property(nonatomic,weak) IBOutlet NSLayoutConstraint *iconBottomConstraint;

@property (nonatomic,assign)UIInterfaceOrientation statusBarOrientation;
- (void)setupWithResourceData:(TPADXResourceData *)resourceData;
@end

NS_ASSUME_NONNULL_END
