//
//  TPADXCNWeChat.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/5.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TPADXCNWeChat <NSObject>
@optional

+ (void)sendReq:(id)req completion:(void (^ __nullable)(BOOL success))completion;
+ (id)object;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy, nullable) NSString *path;
@property (nonatomic, assign) NSUInteger miniProgramType;

@end

NS_ASSUME_NONNULL_END
