//
//  MSAdServerURLBuilder.h
//  AdExpress
//
//  Copyright (c) 2012 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface MSAdServerURLBuilder : NSObject

+ (NSURL *)URLWithAdUnitID:(NSString *)adUnitID
                  keywords:(NSString *)keywords
                  location:(CLLocation *)location
                   testing:(BOOL)testing;

+ (NSURL *)URLWithAdUnitID:(NSString *)adUnitID
                  keywords:(NSString *)keywords
                  location:(CLLocation *)location
      versionParameterName:(NSString *)versionParameterName
                   version:(NSString *)version
                   testing:(BOOL)testing
             desiredAssets:(NSArray *)assets;

+ (NSURL *)URLWithAdUnitID:(NSString *)adUnitID
                  keywords:(NSString *)keywords
                  location:(CLLocation *)location
      versionParameterName:(NSString *)versionParameterName
                   version:(NSString *)version
                   testing:(BOOL)testing
             desiredAssets:(NSArray *)assets
                adSequence:(NSInteger)adSequence;

@end
