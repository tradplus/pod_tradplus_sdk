//
//  TPMediationADManager.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/5/30.
//

#import <Foundation/Foundation.h>
#import <TPMediationHelper/TPMediationADLoader.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPMediationADManager : NSObject

+ (TPMediationADManager *)sharedInstance;
- (TPMediationADLoader *)getLoaderWithUUID:(NSString *)uuid adConfig:(NSDictionary *)adConfig;

- (void)addUUID:(NSString *)UUID;
@property (nonatomic,strong)NSMutableArray *UUIDList;
@end

NS_ASSUME_NONNULL_END
