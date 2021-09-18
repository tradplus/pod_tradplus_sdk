#import <UIKit/UIKit.h>

typedef void (^TPImageDownloadQueueCompletionBlock)(NSDictionary <NSURL *, UIImage *> *result, NSArray *errors);

@interface TPImageDownloadQueue : NSObject

- (void)addDownloadImageURLs:(NSArray<NSURL *> *)imageURLs
             completionBlock:(TPImageDownloadQueueCompletionBlock)completionBlock;

- (void)cancelAllDownloads;

@end
