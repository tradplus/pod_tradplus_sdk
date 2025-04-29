
#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusWaterfallManager.h>
#import <TradPlusAds/TradPlusBottomManager.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import <TradPlusAds/MsCommon.h>

@interface TradPlusLoadAdOperation : NSOperation

@property (nonatomic, weak)TradPlusWaterfallManager *waterfallManager;
@property (nonatomic, weak)TradPlusBottomManager *bottomManager;
@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@property (nonatomic,strong)TradPlusAdWaterfallItem *currentWaterfallItem;
@property (nonatomic, copy)void (^AdDidLoadFinish)(TradPlusAdWaterfallItem *item,BOOL checkFinish);
@property (nonatomic, copy)void (^AdLoadFailed)(TradPlusAdWaterfallItem *item,NSInteger errorCode,NSError *error,NSString *netStatus);

///0=未启动 1=loading 2=失败 3=成功
@property (nonatomic,readonly)TPAdOperationStatus status;
@property (nonatomic,assign)TPLoadMode loadMode;
@end
