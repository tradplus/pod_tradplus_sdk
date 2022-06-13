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

UIInterfaceOrientation MSInterfaceOrientation(void);
UIWindow *MSKeyWindow(void);
CGFloat MSStatusBarHeight(void);
CGRect MSApplicationFrame(void);
CGRect MSScreenBounds(void);
CGSize MSScreenResolution(void);
CGFloat MSDeviceScaleFactor(void);
NSDictionary *MSDictionaryFromQueryString(NSString *query);
NSString *MSSHA256Digest(NSString *string);
BOOL MSViewIsVisible(UIView *view);
BOOL MSViewIntersectsParentWindowWithPercent(UIView *view, CGFloat percentVisible);
NSString *MSResourcePathForResource(NSString *resourceName);
NSArray *MSConvertStringArrayToURLArray(NSArray *strArray);
NSBundle *MSResourceBundleForClass(Class aClass);


