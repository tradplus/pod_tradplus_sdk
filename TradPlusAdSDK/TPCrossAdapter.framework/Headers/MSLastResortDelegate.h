//
//  MSLastResortDelegate.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

@interface MSLastResortDelegate : NSObject
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 60000
<SKStoreProductViewControllerDelegate>
#endif

+ (id)sharedDelegate;

@end
