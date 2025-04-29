//
//  TPSDKLoaderDelegate.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

@protocol TPSDKLoaderDelegate <NSObject>

- (void)tpInitFinish;
- (void)tpInitFailWithError:(NSError *)error;

@optional


@end;
