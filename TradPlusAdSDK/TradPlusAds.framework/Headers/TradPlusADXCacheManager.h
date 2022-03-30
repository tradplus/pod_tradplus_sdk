//
//  TradPlusADXCacheManager.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/18.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusADXCacheManager : NSObject

+ (TradPlusADXCacheManager *)sharedInstance;
///初始化
- (void)setup;
///是否有本地缓存 本返回缓存路径
- (void)checkCacheWithURL:(NSString *)url callback:(void(^)(BOOL didCached,NSString *cachePath))callback;
- (BOOL)checkCacheWithLocalURL:(NSString *)url;
///保存数据
- (BOOL)saveData:(NSData *)data url:(NSString *)url;
///清理所有本地缓存
- (void)clearCache;
@end

NS_ASSUME_NONNULL_END
