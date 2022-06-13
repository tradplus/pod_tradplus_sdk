
#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUnitManager.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import <TradPlusAds/MsCommon.h>

@interface TradPlusC2SBiddingOperation : NSOperation

@property (nonatomic, copy)void (^C2SBiddingFinish)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy)void (^C2SBiddingFailed)(TradPlusAdWaterfallItem *item,NSInteger errorCode,NSString *errorStr);

///0=未启动 1=loading 2=失败 3=成功
@property (nonatomic,readonly)TPAdOperationStatus status;
@property (nonatomic,strong)TradPlusAdWaterfallItem *currentWaterfallItem;
@property (nonatomic, weak)TradPlusUnitManager *tradPlusUnitManager;
@end
