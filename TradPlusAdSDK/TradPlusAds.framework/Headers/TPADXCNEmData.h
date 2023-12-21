//
//  TPADXCNEmData.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/4.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNEmData : TradPlusDataModel

//e1：尝试调⽤deeplink去唤醒APP
@property (nonatomic,strong)NSArray *deeplink_attempt;
//e5：deeplink唤醒APP应⽤时，成功唤起APP
@property (nonatomic,strong)NSArray *app_invoke_success;
//deeplink唤醒APP应⽤时失败
@property (nonatomic,strong)NSArray *app_invoke_loss;
//尝试唤起微信⼩程序
@property (nonatomic,strong)NSArray *wx_invoke_attempt;
//微信⼩程序唤起成功
@property (nonatomic,strong)NSArray *wx_invoke_success;
//视频播放第⼀帧
@property (nonatomic,strong)NSArray *video_play;
//播放了25%时上报
@property (nonatomic,strong)NSArray *video_one_quarter;
//播放了50%时上报
@property (nonatomic,strong)NSArray *video_one_half;
//播放了75%时上报
@property (nonatomic,strong)NSArray *video_three_quarter;
//视频播放完成
@property (nonatomic,strong)NSArray *video_over;
//⽤户点击下载开始或⾃动下载开始
@property (nonatomic,strong)NSArray *download_start;
//下载任务完成
@property (nonatomic,strong)NSArray *download_finish;
//下载内容开始安装
@property (nonatomic,strong)NSArray *install_start;
//下载内容完成安装
@property (nonatomic,strong)NSArray *install_finish;
@end

NS_ASSUME_NONNULL_END
