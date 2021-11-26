//
//  TPEvent.h
//  TradPlusSDKSample
//
//  Created by ms-mac on 2019/11/5.
//  Copyright © 2019 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/MsCommon.h>
#import "TPCommon.h"

NS_ASSUME_NONNULL_BEGIN


@interface TPEvent : NSObject
@property (nonatomic, strong) NSMutableArray *arrUploadInfo;//for test

+ (TPEvent *)sharedInstance;

- (void)uploadEvent:(TPEventType)evid info:(NSDictionary * _Nullable)info;
- (void)uploadEvent:(TPEventType)evid dicUserInfo:(NSDictionary * _Nullable)dicUserInfo segmentId:(NSString * _Nullable)segmentId bucketId:(NSString * _Nullable)bucketId info:(NSDictionary * _Nullable)info;
@end

NS_ASSUME_NONNULL_END
