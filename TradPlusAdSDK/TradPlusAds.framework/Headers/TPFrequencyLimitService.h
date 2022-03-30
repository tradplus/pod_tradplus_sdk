//
//  TPFrequencyLimitService.h
//  TestFrequencyLimit
//
//  Created by xuejun on 2022/3/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPFrequencyLimitService : NSObject

+ (TPFrequencyLimitService *)sharedInstance;
//YES = noLimit
- (BOOL)noLimitWithCapUnitId:(NSString *)capUnitId frequency:(NSDictionary *)frequency;
- (void)saveShowTimeWithCapUnitId:(NSString *)capUnitId;
@end

NS_ASSUME_NONNULL_END
