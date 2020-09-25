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

- (void)fetchStrategyWithPlacementID:(NSString*)placementID adViewHeight:(NSInteger)adViewHeight adViewWight:(NSInteger)adViewWight completHandler:(void (^)(NSDictionary *dicRep, NSError *error))handler;

- (NSString *)generateAdConfParams:(NSString *)placementID adViewHeight:(NSInteger)adViewHeight adViewWight:(NSInteger)adViewWight;

- (BOOL)isStrategyExist:(NSString *)placementID;

- (void)updateStrategy:(NSString *)placementID completionBlock:(void (^)(NSError *error))completionBlock;

//check the ad whether exceed the expire
- (BOOL)checkExpireWithPlacement:(NSString *)placement;

- (NSDictionary *)getDicStrategyWithPlacement:(NSString *)placement;

- (void)sdkOpen:(void (^)(NSError *error))completionBlock;

- (NSURL *)generateAdExpressServerURL:(NSString *)placementID adViewHeight:(NSInteger)adViewHeight adViewWight:(NSInteger)adViewWight;

- (BOOL)netNotReachable;
- (void)setDefaultServerURL;
@end
