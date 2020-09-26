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
+ (NSString *)idfa;
+ (NSString *)deviceType;
+ (NSString *)type;
+ (NSString *)getScreenScale;
+ (NSString *)localTimeZone;
+ (NSString *)localISO;
+ (NSString *)getCarrierName;
+ (NSString *) deviceBrand;
+ (NSString *) getMNC;
+ (NSString *) getMCC;
+ (NSString *)getCurrentLanguage;
+ (NSString *)resolution;
+ (NSString *)connectionType;
+ (NSInteger)netConnectType;

@end
