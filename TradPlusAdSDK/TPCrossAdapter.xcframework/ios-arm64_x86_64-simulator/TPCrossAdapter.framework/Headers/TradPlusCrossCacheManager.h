//
//  TradPlusCrossCacheManager.h
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusCrossCacheManager : NSObject

+ (TradPlusCrossCacheManager *)sharedInstance;
///是否有本地缓存 本返回缓存路径
- (void)checkCacheWithURL:(NSString *)url callback:(void(^)(BOOL didCached,NSString *cachePath))callback;
- (BOOL)checkCacheWithLocalURL:(NSString *)url;
///保存数据
- (BOOL)saveData:(NSData *)data url:(NSString *)url isVideo:(BOOL)isVideo;
///清理所有本地缓存
- (void)clearCache;

- (void)getLocalPathWithMediaFileURL:(NSString *)mediaFileURL isVideo:(BOOL)isVideo callback:(void (^)(NSError *error, NSString *localPath))callback;
@end

NS_ASSUME_NONNULL_END
