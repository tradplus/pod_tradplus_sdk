//
//  MMRCommand.h
//  AdExpress
//
//  Copyright (c) 2011 TradPlusAd, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MMRCommand;

@protocol MMRCommandDelegate <NSObject>

- (void)mrCommand:(MMRCommand *)command createCalendarEventWithParams:(NSDictionary *)params __deprecated;
- (void)mrCommand:(MMRCommand *)command playVideoWithURL:(NSURL *)url;
- (void)mrCommand:(MMRCommand *)command storePictureWithURL:(NSURL *)url __deprecated;
- (void)mrCommand:(MMRCommand *)command shouldUseCustomClose:(BOOL)useCustomClose;
- (void)mrCommand:(MMRCommand *)command setOrientationPropertiesWithForceOrientation:(UIInterfaceOrientationMask)forceOrientation;
- (void)mrCommand:(MMRCommand *)command openURL:(NSURL *)url;
- (void)mrCommand:(MMRCommand *)command expandWithParams:(NSDictionary *)params;
- (void)mrCommand:(MMRCommand *)command resizeWithParams:(NSDictionary *)params;
- (void)mrCommandClose:(MMRCommand *)command;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRCommand : NSObject

@property (nonatomic, weak) id<MMRCommandDelegate> delegate;

+ (id)commandForString:(NSString *)string;

// returns YES by default for user safety
- (BOOL)requiresUserInteractionForPlacementType:(NSUInteger)placementType;
// This allows commands to run even if the delegate is not handling webview requests. Returns NO by default to avoid race conditions. This is
// primarily used to stop commands that can cause bad side effects while the mraid ad is presenting, dismissing, resizing, expanding and pretty much
// just animating at all. If you decide to return YES for this method, you must make sure that the command can operate safely at any point in time
// during an MMRAID ad's lifetime from starting presentation to complete dismissal.
- (BOOL)executableWhileBlockingRequests;
- (BOOL)executeWithParams:(NSDictionary *)params;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRCloseCommand : MMRCommand

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRExpandCommand : MMRCommand

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRResizeCommand : MMRCommand

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRUseCustomCloseCommand : MMRCommand

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRSetOrientationPropertiesCommand : MMRCommand

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMROpenCommand : MMRCommand

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRCreateCalendarEventCommand : MMRCommand

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRPlayVideoCommand : MMRCommand

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRStorePictureCommand : MMRCommand

@end
