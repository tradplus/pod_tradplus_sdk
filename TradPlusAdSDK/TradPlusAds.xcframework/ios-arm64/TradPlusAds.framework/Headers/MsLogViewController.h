//
//  MsLogViewController.h
//  TradPlusAds
//
//  Created by hy on 2020/4/21.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MsLogViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *textView;

/// Append log text (including trailing separator). Updates search results when active.
- (void)appendLogText:(NSString *)logText;

/// Replace entire log content (e.g. Detail/Event mode switch).
- (void)replaceLogContent:(NSString *)content;

@end

NS_ASSUME_NONNULL_END
