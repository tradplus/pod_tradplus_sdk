//
//  MSForceableOrientationProtocol.h
//  AdExpress
//
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MSForceableOrientationProtocol <NSObject>

/**
 * An orientation mask that defines the orientations the view controller supports.
 * This cannot force a change in orientation though.
 */
- (void)setSupportedOrientationMask:(UIInterfaceOrientationMask)supportedOrientationMask;

@end
