//
//  MMRBundleManager.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MMRBundleManager : NSObject

+ (MMRBundleManager *)sharedManager;
- (NSString *)mraidPath;

@end
