//
//  SigmobRouter.h
//  TradPlusAdSDK
//
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SigmobRouterDelegate;

@interface SigmobRouter : NSObject

+ (SigmobRouter *)sharedRouter;

- (void)initializeWithGameId:(NSString *)appid appkey:(NSString *)appkey;
- (void)setPersonalizedAd;
@end
NS_ASSUME_NONNULL_END
