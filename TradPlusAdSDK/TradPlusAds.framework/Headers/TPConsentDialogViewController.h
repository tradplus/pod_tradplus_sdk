//
//  TPConsentDialogViewController.h
//
//  Created by hy on 2020/5/29.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPConsentDialogViewController : UIViewController

@property (nonatomic,copy)void (^didShowAct)(void);
@property (nonatomic,copy)void (^didDismissAct)(void);
@end

NS_ASSUME_NONNULL_END
