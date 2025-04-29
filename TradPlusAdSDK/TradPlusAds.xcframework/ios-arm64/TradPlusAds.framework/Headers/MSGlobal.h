//
//  MSGlobal.h
//  AdExpress
//
//  Copyright 2016 TradPlusAd, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef MS_ANIMATED
#define MS_ANIMATED YES
#endif

NSBundle *MSResourceBundleForClass(Class aClass);
NSString *MSResourcePathForResource(NSString *resourceName);
NSString *MSBundlePath(NSString *bundleName);
NSString *MSSHA256Digest(NSString *string);

UIWindow *MSKeyWindow(void);

