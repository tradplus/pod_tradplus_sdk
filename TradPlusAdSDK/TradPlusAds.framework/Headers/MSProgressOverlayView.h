//
//  MSProgressOverlayView.h
//  AdExpress
//
//  Copyright 2012 TradPlusAd, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MSProgressOverlayViewDelegate;

@interface MSProgressOverlayView : UIView {
    id<MSProgressOverlayViewDelegate> __weak _delegate;
    UIView *_outerContainer;
    UIView *_innerContainer;
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_closeButton;
    CGPoint _closeButtonPortraitCenter;
}

@property (nonatomic, weak) id<MSProgressOverlayViewDelegate> delegate;
@property (nonatomic, strong) UIButton *closeButton;

- (id)initWithDelegate:(id<MSProgressOverlayViewDelegate>)delegate;
- (void)show;
- (void)hide;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol MSProgressOverlayViewDelegate <NSObject>

@optional
- (void)overlayCancelButtonPressed;
- (void)overlayDidAppear;

@end
