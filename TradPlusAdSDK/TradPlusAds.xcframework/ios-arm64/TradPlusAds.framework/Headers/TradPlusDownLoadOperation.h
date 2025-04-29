
#import <Foundation/Foundation.h>
#import <TradPlusAds/MsCommon.h>

@interface TradPlusDownLoadOperation : NSOperation

@property (nonatomic,copy)NSString *downLoadURL;
///0=未启动 1=loading 2=失败 3=成功
@property (nonatomic,readonly)TPAdOperationStatus status;
@property (nonatomic, copy)void (^downLoadFinish)(NSError *error);
@end
