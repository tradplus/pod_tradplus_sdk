//
//  TradPlusCrossCacheItem.h
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusCrossCacheItem : NSObject

@property (nonatomic,copy)NSString *filePath;
@property (nonatomic,assign)NSInteger fileSize;
@property (nonatomic,assign)NSTimeInterval fileDate;
@end

NS_ASSUME_NONNULL_END
