//
//  TradPlusReportTask.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/22.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusReportTask : NSObject

@property (nonatomic,strong)NSArray <NSURL *>*reportURLArray;
@property (nonatomic, copy) void (^reportFinish)(NSString *errorCode,TradPlusReportTask *reportTask);
@end

NS_ASSUME_NONNULL_END
