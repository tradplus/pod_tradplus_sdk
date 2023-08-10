#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@protocol TPDiskLRUCache <NSObject>

/*
 Do NOT call any of the following methods on the main thread, potentially lengthy wait for disk IO
 */
- (BOOL)cachedDataExistsForKey:(NSString *)key;
- (NSData *)retrieveDataForKey:(NSString *)key;
- (void)storeData:(NSData *)data forKey:(NSString *)key;
- (void)removeAllCachedFiles;

@end

@protocol TPMediaFileCache <NSObject>
- (NSURL * _Nullable)cachedFileURLForRemoteFile:(NSString *)remoteFile;
- (BOOL)isRemoteFileCached:(NSString *)remoteFile;
- (void)storeData:(NSData *)data forRemoteSourceFile:(NSString *)remoteFile;
- (void)touchCachedFileForRemoteFile:(NSString *)remoteFile;
@end


@interface TPDiskLRUCache : NSObject

+ (TPDiskLRUCache *)sharedDiskCache;

@end

@interface TPDiskLRUCache (TPDiskLRUCache) <TPDiskLRUCache>
@end

@interface TPDiskLRUCache (TPMediaFileCache) <TPMediaFileCache>
@end

NS_ASSUME_NONNULL_END
