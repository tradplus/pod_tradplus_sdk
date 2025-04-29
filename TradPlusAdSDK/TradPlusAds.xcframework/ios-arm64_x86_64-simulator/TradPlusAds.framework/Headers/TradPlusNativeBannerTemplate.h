//
//  TradPlusNativeBannerTemplate.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/9.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusNativeAdRendering.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusNativeBannerTemplate : UIView <TradPlusNativeAdRendering>

@property (nonatomic,weak)IBOutlet NSLayoutConstraint *titleTopConstraint;
@property (nonatomic,weak)IBOutlet NSLayoutConstraint *descHeightConstraint;
@property (nonatomic,weak)IBOutlet NSLayoutConstraint *mediaViewWidthConstraint;
@property (nonatomic,weak)IBOutlet NSLayoutConstraint *adChoiceRightConstraint;
@property (nonatomic,weak)IBOutlet NSLayoutConstraint *iconWidthConstraint;
@property (nonatomic,weak)IBOutlet UILabel *ctaLabel;
@end

NS_ASSUME_NONNULL_END
