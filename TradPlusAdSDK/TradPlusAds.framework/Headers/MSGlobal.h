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
NSString *MSSHA1Digest(NSString *string);
BOOL MSViewIsVisible(UIView *view);
BOOL MSViewIntersectsParentWindowWithPercent(UIView *view, CGFloat percentVisible);
NSString *MSResourcePathForResource(NSString *resourceName);
NSArray *MSConvertStringArrayToURLArray(NSArray *strArray);
NSBundle *MSResourceBundleForClass(Class aClass);
////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 * Availability constants.
 */

#define MS_IOS_2_0  20000
#define MS_IOS_2_1  20100
#define MS_IOS_2_2  20200
#define MS_IOS_3_0  30000
#define MS_IOS_3_1  30100
#define MS_IOS_3_2  30200
#define MS_IOS_4_0  40000
#define MS_IOS_4_1  40100
#define MS_IOS_4_2  40200
#define MS_IOS_4_3  40300
#define MS_IOS_5_0  50000
#define MS_IOS_5_1  50100
#define MS_IOS_6_0  60000
#define MS_IOS_7_0  70000
#define MS_IOS_8_0  80000
#define MS_IOS_9_0  90000

////////////////////////////////////////////////////////////////////////////////////////////////////

enum {
    MSInterstitialCloseButtonStyleAlwaysVisible,
    MSInterstitialCloseButtonStyleAlwaysHidden,
    MSInterstitialCloseButtonStyleAdControlled
};
typedef NSUInteger MSInterstitialCloseButtonStyle;

enum {
    MSInterstitialOrientationTypePortrait,
    MSInterstitialOrientationTypeLandscape,
    MSInterstitialOrientationTypeAll
};
typedef NSUInteger MSInterstitialOrientationType;


////////////////////////////////////////////////////////////////////////////////////////////////////

@interface NSString (MSAdditions)

/*
 * Returns string with reserved/unsafe characters encoded.
 */
- (NSString *)mp_URLEncodedString;

+ (NSString *)localizedStringWithKey:(NSString *)key defaultValue:(NSString *)value;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIDevice (MSAdditions)

- (NSString *)mp_hardwareDeviceName;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UIApplication (MSAdditions)

// Correct way to hide/show the status bar on pre-ios 7.
- (void)mp_preIOS7setApplicationStatusBarHidden:(BOOL)hidden;
- (BOOL)mp_supportsOrientationMask:(UIInterfaceOrientationMask)orientationMask;
- (BOOL)mp_doesOrientation:(UIInterfaceOrientation)orientation matchOrientationMask:(UIInterfaceOrientationMask)orientationMask;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////
// Optional Class Forward Def Protocols
////////////////////////////////////////////////////////////////////////////////////////////////////

@class MSAdConfiguration;

@protocol MSAdAlertManagerProtocol <NSObject>

@property (nonatomic, strong) MSAdConfiguration *adConfiguration;
@property (nonatomic, copy) NSString *adUnitId;
@property (nonatomic, weak) UIView *targetAdView;
@property (nonatomic, weak) id delegate;

- (void)beginMonitoringAlerts;
- (void)endMonitoringAlerts;
- (void)processAdAlertOnce;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////
// Small alert wrapper class to handle telephone protocol prompting
////////////////////////////////////////////////////////////////////////////////////////////////////

@class MSTelephoneConfirmationController;

typedef void (^MSTelephoneConfirmationControllerClickHandler)(NSURL *targetTelephoneURL, BOOL confirmed);

@interface MSTelephoneConfirmationController : NSObject <UIAlertViewDelegate>

- (id)initWithURL:(NSURL *)url clickHandler:(MSTelephoneConfirmationControllerClickHandler)clickHandler;
- (void)show;

@end
