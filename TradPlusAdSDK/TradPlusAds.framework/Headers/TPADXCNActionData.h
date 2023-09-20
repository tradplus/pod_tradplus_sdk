//
//  TPADXCNActionData.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/4.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNActionData : TradPlusDataModel

//1-标准点击，2-摆动触发，3-上滑触发 0-无点击
@property (nonatomic,assign)NSInteger click_type;
@property (nonatomic,assign)CGPoint startPoint;
@property (nonatomic,assign)CGPoint endPoint;
//乘以980取整
@property (nonatomic,assign)NSInteger accelerateX;
@property (nonatomic,assign)NSInteger accelerateY;
@property (nonatomic,assign)NSInteger accelerateZ;
//1-轻微，2-剧烈
@property (nonatomic,assign)NSInteger sway_type;
//1-按钮区域，2-全屏区域
@property (nonatomic,assign)NSInteger click_area;
//默认30
@property (nonatomic,assign)NSInteger slide_up_distance;
//默认5秒
@property (nonatomic,assign)NSInteger skip_time;

@property (nonatomic,assign)NSInteger op_mode;
//开屏⼴告 跳转提⽰语
@property (nonatomic,strong)NSString *op_slogan;
@property (nonatomic,strong)NSString *landingpage_url;
@property (nonatomic,strong)NSString *deeplink_url;
@property (nonatomic,strong)NSString *wxoid;
@property (nonatomic,strong)NSString *wxp;
@property (nonatomic,strong)NSString *store_id;
@property (nonatomic,strong)NSString *universal_link;
//Android
@property (nonatomic,strong)NSString *market_url;
@property (nonatomic,strong)NSString *app_download_url;
@property (nonatomic,strong)NSString *quick_app_url;

@end

NS_ASSUME_NONNULL_END
