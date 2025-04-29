//
//  TPFrequencyLimitData.h
//  TestFrequencyLimit
//
//  Created by xuejun on 2022/3/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPFrequencyLimitData : NSObject <NSCopying,NSCoding>

@property (nonatomic,assign)NSInteger lastShowTime;
@property (nonatomic,assign)NSInteger dayShowCount;
@property (nonatomic,assign)NSInteger hourShowCount;
@end

NS_ASSUME_NONNULL_END
