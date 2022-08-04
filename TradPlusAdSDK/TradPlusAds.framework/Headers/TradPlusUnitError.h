

#import <Foundation/Foundation.h>
#import <TradPlusAds/MsCommon.h>

typedef enum : NSUInteger {
    TPUnitErrorNoNetWork= 1007,
    TPUnitErrorWrongConfig = 1000,
    TPUnitErrorLoading = 1001,
    TPUnitErrorC2SBiddingInfoError = 20006,
    TPUnitErrorNoAdUnitID = 10002,
    TPUnitErrorNoRenderingClass = 10003,
    TPUnitErrorNoRenderer = 10004,
    TPUnitErrorNoSubView = 10005,
    TPUnitErrorBiddingInfoError = 10006,
    TPUnitErrorNoBiddingAdSource= 10007,
    TPUnitErrorNoBiddingNoResponse = 10008,
    TPUnitErrorResponseNoWaterfall = 10009,
    TPUnitErrorNoRootViewController = 10010,
    TPUnitErrorNoWindow = 10011,
    TPUnitErrorPostBiddingDataError = 10012,
    TPUnitErrorLimit = 600004,
    TPUnitErrorNoWaterfall = 600009,
    TPUnitErrorLoadToFast = 600015,
    TPUnitErrorHasCache = 600019,
    TPUnitErrorBiddingNoWaterfall =600103,
    TPUnitErrorNetWorkNoFill = 800002,
    TPUnitErrorNetWorkTimeOut = 800003,
    TPUnitErrorNetWorkLimit = 800004,
    TPUnitErrorNetWorkNoAdSource = 800009,
    TPUnitErrorNetWorkNoAdconf = 800012,
    TPUnitErrorNetWorkNoAdapter = 800013,
    TPUnitErrorNetWorkAdconfError = 800017,
    TPUnitErrorNetWorkLoadFailedLimitError = 801107,
    TPUnitErrorLoadFail = 810011,
    TPUnitErrorShowLimit = 1000004,
    TPUnitErrorShowNoReadyAd = 1000005,
    TPUnitErrorRenderingError = 1100014,
} TPUnitErrorCode;


@interface TradPlusUnitError : NSObject

+ (NSError *)errorWithCode:(TPUnitErrorCode)code;
+ (NSError *)errorWithCode:(TPUnitErrorCode)code message:(NSString *)message;
+ (NSError *)errorWithEvent:(MSEventType)eventType code:(NSInteger)code message:(NSString *)msg;
+ (NSError *)NoImageDataError;

+ (NSError *)biddingErrorWithNbr:(NSInteger)nbr;
@end

