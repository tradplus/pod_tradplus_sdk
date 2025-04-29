//
//  TPCrashManager.h
//  TestCrash
//
//  Created by xuejun on 2021/11/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPCrashManager : NSObject

+ (TPCrashManager *)sharedInstance;
- (void)setup;

//强制删除字段 0 正常  1 在黑名单中，删除本地配置  2 在黑名单中，不用删除本地配置 
@property (nonatomic,assign)NSInteger discardconf;
@end

NS_ASSUME_NONNULL_END
