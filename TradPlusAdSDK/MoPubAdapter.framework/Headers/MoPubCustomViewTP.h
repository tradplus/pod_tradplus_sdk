//
//  MoPubCustomViewTP.h
//  fluteSDKSample
//
//  Created by ms-mac on 2021/6/24.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoPub.h"

NS_ASSUME_NONNULL_BEGIN

@interface MoPubCustomViewTP : UIView <MPNativeAdRendering>

@property (strong, nonatomic) UILabel *titleLabel;
@property (strong, nonatomic) UILabel *mainTextLabel;
@property (strong, nonatomic) UILabel *callToActionLabel;
@property (strong, nonatomic) UILabel *sponsoredByLabel;
@property (strong, nonatomic) UIImageView *iconImageView;
@property (strong, nonatomic) UIImageView *mainImageView;
@property (strong, nonatomic) UIImageView *privacyInformationIconImageView;

@end

NS_ASSUME_NONNULL_END
