//
//  TradPlus.h
//  TradPlusAds
//
//  Created by ms-mac on 2020/10/12.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSLogging.h"
#import "MsCommon.h"

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, AdMobAdChoicesPosition) {
    AdMobAdChoicesPositionTopRightCorner,     ///< Top right corner.
    AdMobAdChoicesPositionTopLeftCorner,      ///< Top left corner.
    AdMobAdChoicesPositionBottomRightCorner,  ///< Bottom right corner.
    AdMobAdChoicesPositionBottomLeftCorner    ///< Bottom Left Corner.
};

@interface TradPlus : NSObject
+ (instancetype)sharedInstance;

+ (void)initSDK:(NSString *)appId completionBlock:(void (^)(NSError *error))completionBlock;
+ (NSString *)getVersion;
+ (void)setLogLevel:(MSLogLevel)level;

+ (void)setGDPRDataCollection:(BOOL)canDataCollection;
+ (MSConsentStatus)getGDPRDataCollection;

+ (void)setCCPADoNotSell:(BOOL)isCCPA;
+ (void)setCOPPAIsAgeRestrictedUser:(BOOL)isAgeRestrictedUser;
+ (void)setAuthUID:(BOOL)authUID;
+ (void)setDevAllowTracking:(BOOL)allowTracking;


+ (BOOL)isAllowTracking;

+ (void)setAdMobNativeLogoPosition:(AdMobAdChoicesPosition)positionType;
@property (nonatomic, strong) NSString *appId;
//用户信息自定义 key:{user_id, user_age, user_gender...}
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@end

NS_ASSUME_NONNULL_END
