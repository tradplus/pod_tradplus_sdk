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

//远程调试模式 发送日志
//{
//    "adtype": "banner",
//    "channel": "tradplus",
//    "adUnitId": "AF959A1B40C322086EBCCE3604BAECB4",
//    "aid": "xxxxxx",
//    "params": {},
//    "timestamp": 123,
//    "events": [
//               [
//                "12-01 11:51:49.205",
//                "request",
//                ""
//                ],
//               [
//                "12-01 11:51:52.105",
//                "response",
//                ""
//                ]
//               ]
//}
- (NSDictionary *)generateLog:(NSString *)adType channel:(NSString *)channel adUnitId:(NSString *)adUnitId
                       params:(NSDictionary *)params events:(NSArray *)events;

- (void)sendLog:(NSDictionary *)dicLog;

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
