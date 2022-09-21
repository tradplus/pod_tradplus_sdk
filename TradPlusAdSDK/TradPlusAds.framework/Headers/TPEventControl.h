//
//  TPEventControl.h
//  TradPlusAds
//
//  Created by xuejun on 2022/6/30.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPEventControl : NSObject

@property (nonatomic,strong)NSString *filePath;
@property (nonatomic,strong)NSMutableArray *eventDataCache;
@property (nonatomic,strong)NSMutableArray *uploadDataCache;

//子类需要时实现 在上传前，对埋点数据进行特定规则 修改更新
- (NSMutableArray *)updateEventData:(NSMutableArray *)uploadArray;
//子类必须实现 上传规则
- (void)uploadWithDataArray:(NSArray *)uploadArray;
//子类需要时实现 直传埋点
- (void)sendEventWithInfoDic:(NSDictionary *)infoDic;
//子类需要时实现 添加埋点时的其他规则设置
- (void)addEvent:(NSDictionary *)infoDic;

- (void)updateCache;
- (void)uploadFinish;
- (void)rollbackArray:(NSArray *)dataArray;
- (void)sendDataRollback:(id)info;
- (void)addEventWithInfoDic:(NSDictionary *)infoDic;
- (void)clear;
@end

NS_ASSUME_NONNULL_END
