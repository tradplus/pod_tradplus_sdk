//
//  MSAdAlertGestureRecognizer.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSInteger const gMPAdAlertGestureMaxAllowedYAxisMovement;

typedef enum
{
    MSAdAlertGestureRecognizerState_ZigRight1,
    MSAdAlertGestureRecognizerState_ZagLeft2,
    MSAdAlertGestureRecognizerState_Recognized
} MSAdAlertGestureRecognizerState;

@interface MSAdAlertGestureRecognizer : UIGestureRecognizer

// default is 4
@property (nonatomic, assign) NSInteger numZigZagsForRecognition;

// default is 100
@property (nonatomic, assign) CGFloat minTrackedDistanceForZigZag;

@property (nonatomic, readonly) MSAdAlertGestureRecognizerState currentAlertGestureState;
@property (nonatomic, readonly) CGPoint inflectionPoint;
@property (nonatomic, readonly) BOOL thresholdReached;
@property (nonatomic, readonly) NSInteger curNumZigZags;

@end
