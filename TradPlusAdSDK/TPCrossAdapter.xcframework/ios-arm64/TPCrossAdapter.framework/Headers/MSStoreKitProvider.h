//
//  MSFeatureDetector.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/MSGlobal.h>
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= MS_IOS_6_0
#import <StoreKit/StoreKit.h>
#endif

@class SKStoreProductViewController;

@interface MSStoreKitProvider : NSObject

+ (BOOL)deviceHasStoreKit;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= MS_IOS_6_0
+ (SKStoreProductViewController *)buildController;
#endif

@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= MS_IOS_6_0
@protocol MSSKStoreProductViewControllerDelegate <SKStoreProductViewControllerDelegate>
#else
@protocol MSSKStoreProductViewControllerDelegate
#endif
@end
