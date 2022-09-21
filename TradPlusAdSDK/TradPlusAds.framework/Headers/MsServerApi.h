//
//  iMsSDK.h
//  iMsSDK
//
//  Created by tx on 16/8/24.
//  Copyright © 2016年 tx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MsServerApi : NSObject

+ (instancetype)sharedInstance;

- (void)fetchStrategyWithPlacementID:(NSString*)placementID segmentTag:(NSString*)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo completHandler:(void (^)(NSDictionary *dicRep, NSError *error))handler;

- (void)fetchCrossStrategyWithPlacementID:(NSString*)placementID adType:(int)adType completHandler:(void (^)(NSDictionary *dicRep, NSError *error))handler;

- (NSString *)generateOpenParams;

- (BOOL)isStrategyExist:(NSString *)placementID segmentTag:(NSString *)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo;

- (void)updateStrategy:(NSString *)placementID segmentTag:(NSString *)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo completionBlock:(void (^)(NSError *error))completionBlock;

- (NSDictionary *)getDicStrategyWithPlacement:(NSString *)placement;

- (void)sdkOpen:(void (^)(NSError *error))completionBlock;
- (BOOL)netNotReachable;
- (void)setDefaultServerURL;

- (void)httpsGET:(NSString *)strURL ecpmValue:(NSString *)ecpmValue lostCode:(NSString *)lostCode ASPID:(NSString *)ASPID completionBlock:(void (^)(NSString *ec))completionBlock;
@end
