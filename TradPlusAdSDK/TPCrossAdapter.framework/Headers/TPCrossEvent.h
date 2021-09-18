#import <Foundation/Foundation.h>
#import <TradPlusAds/MsCommon.h>

NS_ASSUME_NONNULL_BEGIN


@interface TPCrossEvent : NSObject
@property (nonatomic, strong) NSMutableArray *arrUploadInfo;//for test

+ (TPCrossEvent *)sharedInstance;

- (void)uploadEvent:(MSEventType)evid info:(NSDictionary * _Nullable)info;
- (void)uploadEvent:(MSEventType)evid info:(NSDictionary * _Nullable)info adConfInfo:(NSDictionary *)adConfInfo;
//- (void)uploadEvent:(MSEventType)evid dicUserInfo:(NSDictionary * _Nullable)dicUserInfo segmentId:(NSString * _Nullable)segmentId bucketId:(NSString * _Nullable)bucketId info:(NSDictionary * _Nullable)info;
@end

NS_ASSUME_NONNULL_END
