
#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUnitManager.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import <TradPlusAds/MsCommon.h>

@interface TradPlusBiddingTokenOperation : NSOperation

@property (nonatomic, copy)void (^biddingTokenFinish)(TradPlusAdWaterfallItem *item,NSDictionary *adsourceplacement);
@property (nonatomic, copy)void (^biddingTokenFailed)(TradPlusAdWaterfallItem *item,NSInteger errorCode,NSString *errorStr);

///0=未启动 1=loading 2=失败 3=成功
@property (nonatomic,readonly)TPAdOperationStatus status;
@property (nonatomic,strong)TradPlusAdWaterfallItem *currentWaterfallItem;
@end
