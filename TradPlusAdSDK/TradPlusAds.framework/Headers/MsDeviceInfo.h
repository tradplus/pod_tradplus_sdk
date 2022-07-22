//
//  MPDeviceInfo.h
//  MonitorPlatDemo
//
//  Created by tx on 16/7/25.
//  Copyright © 2016年 tx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MsDeviceInfo : NSObject

+ (NSString *)deviceName;
+ (NSString *)os;
+ (NSString *)osVersion;
+ (NSString *)isADTrackLimited;
+ (NSString *)getIDFA;
+ (NSString *)getEid;
+ (NSString *)deviceType;
+ (NSString *)type;
+ (NSString *)getScreenScale;
+ (NSString *)localTimeZone;
+ (NSString *)localISO;
+ (NSString *)getCarrierName;
+ (NSString *)deviceBrand;
+ (NSString *)getMNC;
+ (NSString *)getMCC;
+ (NSString *)getCurrentLanguage;
+ (NSString *)resolution;
+ (NSString *)appName;
+ (void)checkIDFAPermission;

//横竖屏
+ (int)orientation;
///在initSDK时调用
+ (int)bidOrientation;

//流量分组
+ (NSString *)app_ver;
+ (NSString *)app_instime; //install time
////v adconf; V event; sdk version.
//+ (NSString *)device_idfa; ->idfa
+ (NSString *)device_idfv;
//+ (NSString *)device_osv; ->osVersion
+ (NSString *)device_type; //iphone,ipad
+ (NSString *)device_make; //manufacturer "Apple"
+ (NSString *)device_model;
+ (NSString *)device_contype; //0: unknown, 1: 有线网络, 2: WiFi, 3: 未知几代蜂窝网络, 4: 2G, 5: 3G, 6: 4G, 7: 5G

///获取 SKAdNetworkIdentifier子集
+ (NSArray *)getAdNetworkItems;

@end
