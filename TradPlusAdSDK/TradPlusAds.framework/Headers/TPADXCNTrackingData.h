//
//  TPADXCNTrackingData.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/4.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusDataModel.h>
#import <TradPlusAds/TPADXCNEmData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNTrackingData : TradPlusDataModel

@property (nonatomic,strong)TPADXCNEmData *em;
//点击tracking url
@property (nonatomic,strong)NSArray *clkurl;
//展示tracking url
@property (nonatomic,strong)NSArray *impurl;
//Win url 竞胜ul
@property (nonatomic,strong)NSArray *nurl;
//Loss url
@property (nonatomic,strong)NSArray *lurl;
@end

NS_ASSUME_NONNULL_END
