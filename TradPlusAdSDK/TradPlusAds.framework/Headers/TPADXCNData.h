//
//  TPADXCNData.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/4.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusDataModel.h>
#import <TradPlusAds/TPADXCNADData.h>
#import <TradPlusAds/TPADXCNTrackingData.h>
#import <TradPlusAds/TPADXCNActionData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNData : TradPlusDataModel

@property (nonatomic,strong)NSString *dsp_name;
@property (nonatomic,strong)NSString *adid;
@property (nonatomic,strong)NSString *cid;
@property (nonatomic,assign)CGFloat price;
@property (nonatomic,assign)CGFloat price_cny_cent;
@property (nonatomic,assign)NSInteger interact_type;
@property (nonatomic,strong)TPADXCNADData *ad;
@property (nonatomic,strong)TPADXCNTrackingData *tracking;
@property (nonatomic,strong)TPADXCNActionData *action;
@property (nonatomic,strong)NSDictionary *originalConfigDictionary;

@property (nonatomic,assign)NSInteger skipTime;
@property (nonatomic,assign)BOOL showTime;
@end

NS_ASSUME_NONNULL_END
