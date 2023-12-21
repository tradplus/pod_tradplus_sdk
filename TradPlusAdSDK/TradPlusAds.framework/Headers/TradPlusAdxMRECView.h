//
//  TradPlusAdxMRECView.h
//  TradPlusAds
//
//  Created by xuejun on 2023/2/15.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXResourceData.h>
#import <TradPlusAds/TradPlusAdxBaseView.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdxMRECView : TradPlusAdxBaseView

@property(nonatomic,weak) IBOutlet UILabel *titleLabel;
@property(nonatomic,weak) IBOutlet UILabel *descLabel;
@property(nonatomic,weak) IBOutlet UILabel *actLabel;
@property(nonatomic,weak) IBOutlet UIImageView *mainImageView;

- (void)setupWithResourceData:(TPADXResourceData *)resourceData;
@end

NS_ASSUME_NONNULL_END
