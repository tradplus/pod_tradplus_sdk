//
//  TradPlus.h
//  TradPlusAds
//
//  Created by ms-mac on 2020/10/12.
//  Copyright © 2020 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSLogging.h"

/// Position of the AdChoices icon in the containing ad.
typedef NS_ENUM(NSInteger, AdMobAdChoicesPosition) {
    AdMobAdChoicesPositionTopRightCorner,     ///< Top right corner.
    AdMobAdChoicesPositionTopLeftCorner,      ///< Top left corner.
    AdMobAdChoicesPositionBottomRightCorner,  ///< Bottom right corner.
    AdMobAdChoicesPositionBottomLeftCorner    ///< Bottom Left Corner.
};

NS_ASSUME_NONNULL_BEGIN

@interface TradPlus : NSObject
+ (instancetype)sharedInstance;

+ (void)initSDK:(NSString *)appId completionBlock:(void (^)(NSError *error))completionBlock;
+ (NSString *)getVersion;
+ (void)setLogLevel:(MSLogLevel)level;

+ (void)setCCPA:(BOOL)isCCPA;
+ (void)setCOPPAChild:(BOOL)isCOPPAChild;
+ (void)setAuthUID:(BOOL)authUID;

+ (void)setAdMobNativeLogoPosition:(AdMobAdChoicesPosition)positionType;
@property (nonatomic, strong) NSString *appId;
//用户信息自定义 key:{user_id, user_age, user_gender...}
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@end

NS_ASSUME_NONNULL_END
