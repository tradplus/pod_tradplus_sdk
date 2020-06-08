//
//  MSNativeAdData.h
//  AdExpress
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSNativeAd;

@interface MSNativeAdData : NSObject

@property (nonatomic, copy) NSString *adUnitID;
@property (nonatomic, strong) MSNativeAd *ad;

@end
