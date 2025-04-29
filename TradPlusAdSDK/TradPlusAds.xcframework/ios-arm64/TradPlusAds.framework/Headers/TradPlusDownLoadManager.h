//
//  TradPlusDownLoadManager.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/28.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusDownLoadOperation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusDownLoadManager : NSObject

+ (TradPlusDownLoadManager *)sharedInstance;
- (TradPlusDownLoadOperation *)downLoadOperationWithURL:(NSString *)url;
- (void)getImageDataWithURL:(NSString *)urlStr callback:(void (^)(NSData *imageData,NSError *error))callback;
@end

NS_ASSUME_NONNULL_END
