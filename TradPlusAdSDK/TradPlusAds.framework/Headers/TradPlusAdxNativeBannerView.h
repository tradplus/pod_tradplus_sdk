//
//  TradPlusAdxNativeBannerView.h
//  TradPlusAds
//
//  Created by xuejun on 2023/2/9.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXNativeData.h>
#import <TradPlusAds/TradPlusAdxBaseView.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdxNativeBannerView : TradPlusAdxBaseView

@property(nonatomic,weak) IBOutlet UILabel *actLabel;
@property(nonatomic,weak) IBOutlet NSLayoutConstraint *actWidthConstraint;

@property(nonatomic,weak) IBOutlet UIImageView *adChoiceImageView;
@property(nonatomic,weak) IBOutlet NSLayoutConstraint *adChoiceWidthConstraint;

@property(nonatomic,weak) IBOutlet UIImageView *iconImageView;

@property(nonatomic,weak) IBOutlet UILabel *titleLabel;
@property(nonatomic,weak) IBOutlet NSLayoutConstraint *titleLeftConstraint;
@property(nonatomic,weak) IBOutlet NSLayoutConstraint *titleRightConstraint;

@property(nonatomic,weak) IBOutlet UILabel *descLabel;
@property(nonatomic,weak) IBOutlet NSLayoutConstraint *descLeftConstraint;
@property(nonatomic,weak) IBOutlet NSLayoutConstraint *descRightConstraint;

- (void)setupWithNativeData:(TPADXNativeData *)nativeData;
@end

NS_ASSUME_NONNULL_END
