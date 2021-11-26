//
//  MsEvent.h
//  TradPlusSDKSample
//
//  Created by ms-mac on 2019/11/5.
//  Copyright © 2019 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsCommon.h"

NS_ASSUME_NONNULL_BEGIN


@interface MsEvent : NSObject
@property (nonatomic, strong) NSMutableArray *arrUploadInfo;//for test

+ (MsEvent *)sharedInstance;

- (void)uploadEvent:(MSEventType)evid info:(NSDictionary * _Nullable)info;
- (void)uploadEvent:(MSEventType)evid dicUserInfo:(NSDictionary * _Nullable)dicUserInfo segmentId:(NSString * _Nullable)segmentId bucketId:(NSString * _Nullable)bucketId info:(NSDictionary * _Nullable)info;

- (void)uploadEvent:(MSEventType)evid dicUserInfo:(NSDictionary * _Nullable)dicUserInfo segmentId:(NSString * _Nullable)segmentId bucketId:(NSString * _Nullable)bucketId info:(NSDictionary * _Nullable)info isNewWrapper:(BOOL)isNewWrapper;
@end

NS_ASSUME_NONNULL_END
