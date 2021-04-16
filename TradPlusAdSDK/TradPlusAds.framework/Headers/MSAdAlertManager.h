//
//  MSAdAlertManager.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSGlobal.h"

@protocol MSAdAlertManagerDelegate;

@class MSAdConfiguration;

@interface MSAdAlertManager : NSObject <MSAdAlertManagerProtocol>

@end

@protocol MSAdAlertManagerDelegate <NSObject>

@required
- (UIViewController *)viewControllerForPresentingMailVC;
- (void)adAlertManagerDidTriggerAlert:(MSAdAlertManager *)manager;

@optional
- (void)adAlertManagerDidProcessAlert:(MSAdAlertManager *)manager;

@end
