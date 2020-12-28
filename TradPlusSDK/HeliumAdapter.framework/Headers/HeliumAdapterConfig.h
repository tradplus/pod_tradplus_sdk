//
//  HeliumAdapterConfig.h
//  HeliumAdapter
//
//  Created by ms-mac on 2020/11/18.
//

#import <Foundation/Foundation.h>
#import <HeliumSdk/HeliumSdk.h>

extern BOOL gHeliumStarted;
extern BOOL gHeliumStarting;

NS_ASSUME_NONNULL_BEGIN

@interface HeliumAdapterConfig : NSObject
@property (nonatomic, strong) NSMutableArray *waitingObj;

+ (instancetype)sharedInstance;

- (void)heliumStart:(id)obj appId:(NSString *)appId appSign:(NSString *)appSign;
@end

NS_ASSUME_NONNULL_END
