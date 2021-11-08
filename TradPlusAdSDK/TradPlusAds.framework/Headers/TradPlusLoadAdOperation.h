
#import <Foundation/Foundation.h>
#import "TradPlusUnitManager.h"
#import "TradPlusAdWaterfallItem.h"
#import "MsCommon.h"

@interface TradPlusLoadAdOperation : NSOperation

@property (nonatomic, weak)TradPlusUnitManager *tradPlusUnitManager;
@property (nonatomic, copy)void (^AdDidLoadFinish)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy)void (^AdLoadFailed)(TradPlusAdWaterfallItem *item,NSInteger errorCode,NSError *error);

///0=未启动 1=loading 2=失败 3=成功
@property (nonatomic,readonly)TPAdOperationStatus status;
@end
