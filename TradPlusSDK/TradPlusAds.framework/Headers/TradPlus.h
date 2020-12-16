//
//  TradPlus.h
//  TradPlusAds
//
//  Created by ms-mac on 2020/10/12.
//  Copyright © 2020 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSLogging.h"

NS_ASSUME_NONNULL_BEGIN

@interface TradPlus : NSObject

+ (void)initSDK:(NSString *)appId completionBlock:(void (^)(NSError *error))completionBlock;
+ (NSString *)getVersion;
+ (void)setLogLevel:(MSLogLevel)level;

+ (void)setCCPA:(BOOL)isCCPA;
+ (void)setCOPPAChild:(BOOL)isCOPPAChild;
+ (void)setAuthUID:(BOOL)authUID;

@end

NS_ASSUME_NONNULL_END
