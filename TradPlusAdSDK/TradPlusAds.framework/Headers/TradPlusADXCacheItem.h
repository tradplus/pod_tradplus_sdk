//
//  TradPlusADXCacheItem.h
//  TestCache
//
//  Created by xuejun on 2021/10/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusADXCacheItem : NSObject

@property (nonatomic,copy)NSString *filePath;
@property (nonatomic,assign)NSInteger fileSize;
@property (nonatomic,assign)NSTimeInterval fileDate;
@end

NS_ASSUME_NONNULL_END
