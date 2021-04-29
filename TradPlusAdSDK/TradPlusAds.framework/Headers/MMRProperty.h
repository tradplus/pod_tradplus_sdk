//
//  MMRProperty.h
//  AdExpress
//
//  Copyright (c) 2011 TradPlusAd, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "MMRConstants.h"

@interface MMRProperty : NSObject

- (NSString *)description;
- (NSString *)jsonString;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRHostSDKVersionProperty : MMRProperty

@property (nonatomic, copy) NSString *version;

+ (MMRHostSDKVersionProperty *)defaultProperty;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRPlacementTypeProperty : MMRProperty {
    MMRAdViewPlacementType _placementType;
}

@property (nonatomic, assign) MMRAdViewPlacementType placementType;

+ (MMRPlacementTypeProperty *)propertyWithType:(MMRAdViewPlacementType)type;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRStateProperty : MMRProperty {
    MMRAdViewState _state;
}

@property (nonatomic, assign) MMRAdViewState state;

+ (MMRStateProperty *)propertyWithState:(MMRAdViewState)state;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRScreenSizeProperty : MMRProperty {
    CGSize _screenSize;
}

@property (nonatomic, assign) CGSize screenSize;

+ (MMRScreenSizeProperty *)propertyWithSize:(CGSize)size;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRSupportsProperty : MMRProperty

@property (nonatomic, assign) BOOL supportsSms;
@property (nonatomic, assign) BOOL supportsTel;
@property (nonatomic, assign) BOOL supportsCalendar;
@property (nonatomic, assign) BOOL supportsStorePicture;
@property (nonatomic, assign) BOOL supportsInlineVideo;

+ (NSDictionary *)supportedFeatures;
+ (MMRSupportsProperty *)defaultProperty;
+ (MMRSupportsProperty *)propertyWithSupportedFeaturesDictionary:(NSDictionary *)dictionary;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MMRViewableProperty : MMRProperty {
    BOOL _isViewable;
}

@property (nonatomic, assign) BOOL isViewable;

+ (MMRViewableProperty *)propertyWithViewable:(BOOL)viewable;

@end
