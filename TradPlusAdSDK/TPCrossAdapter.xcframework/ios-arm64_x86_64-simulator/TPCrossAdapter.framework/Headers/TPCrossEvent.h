#import <Foundation/Foundation.h>
#import <TradPlusAds/MsCommon.h>

NS_ASSUME_NONNULL_BEGIN


@interface TPCrossEvent : NSObject
@property (nonatomic, strong) NSMutableArray *arrUploadInfo;//for test

+ (TPCrossEvent *)sharedInstance;

- (void)uploadEvent:(MSEventType)evid info:(NSDictionary * _Nullable)info;
- (void)uploadEvent:(MSEventType)evid info:(NSDictionary * _Nullable)info adConfInfo:(nullable NSDictionary *)adConfInfo;

- (void)addEventWithEventType:(MSEventType)eventType info:(NSDictionary *)infoDic;
@end

NS_ASSUME_NONNULL_END
