#import <Foundation/Foundation.h>
#import "MSAdConfiguration.h"

#ifndef NS_ENUM
#define NS_ENUM(_type, _name) enum _name : _type _name; enum _name : _type
#endif

typedef NS_ENUM(NSInteger, MSLogEventScribeCategory) {
    MSExchangeClientEventCategory,
    MSExchangeClientErrorCategory,
};

typedef NS_ENUM(NSInteger, MSLogEventNetworkType) {
    MSLogEventNetworkTypeUnknown,
    MSLogEventNetworkTypeEthernet,
    MSLogEventNetworkTypeWifi,
    MSLogEventNetworkTypeMobile,
};

/*
 * Event names.
 */
extern NSString *const MSLogEventNameAdRequest;
extern NSString *const MSLogEventNameClickthroughDwellTime;

/*
 * Event categories.
 */
extern NSString *const MSLogEventCategoryRequests;
extern NSString *const MSLogEventCategoryNativeVideo;
extern NSString *const MSLogEventCategoryAdInteractions;

/* MSAdConfigurationLogEventProperties
 *
 * Convenience struct class for keeping track of the log event properties
 * that are parsed off the MSAdConfiguration.
 */
@interface MSAdConfigurationLogEventProperties : NSObject

@property (nonatomic, copy) NSString *adType;
@property (nonatomic, copy) NSString *adCreativeId;
@property (nonatomic, copy) NSString *dspCreativeId;
@property (nonatomic, copy) NSString *adNetworkType;
@property (nonatomic) CGSize adSize;
@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *adUnitId;

- (instancetype)initWithConfiguration:(MSAdConfiguration *)configuration;

@end

@interface MSLogEvent : NSObject

#pragma mark - Public properties

/* Event details */

/**
 * The event or error name. Examples include "ad_request", "ad_impression", "ad_click",
 * "json_missing_required_fields", "invalid_url", "invalid_positioning_data".
 */
@property (nonatomic, copy) NSString *eventName;

/**
 * The event or error category. This is typically set to the component in which the event
 * or error occurred. Examples include "network", "mraid_video", "TradPlusAd_native", "facebook_banner",
 * "server_positioning", "client_positioning".
 */
@property (nonatomic, copy) NSString *eventCategory;

/**
 * Creation time of the object.
 */
@property (nonatomic, readonly) NSDate *timestamp;

/**
 * The scribe category that the log event will be bucketed into.
 */
@property (nonatomic, readonly) MSLogEventScribeCategory scribeCategory;


/* Ad details */

/**
 * The TradPlusAd AdUnit ID string that is associated with the event.
 */
@property (nonatomic, copy) NSString *adUnitId;

/**
 * The TradPlusAd Creative ID string that is associated with the event.
 */
@property (nonatomic, copy) NSString *adCreativeId;

/**
 * The DSP Creative ID string that is associated with the event.
 */
@property (nonatomic, copy) NSString *dspCreativeId;

/**
 * Identifier for a class of ad. Examples include "html", "mraid", "interstitial", "json",
 * "custom", "clear".
 */
@property (nonatomic, copy) NSString *adType;

/**
 * Identifier for an ad network type. Examples include "admob", "custom", "custom_native", "mojiva",
 * "huntmads", "millennial".
 */
@property (nonatomic, copy) NSString *adNetworkType;

/**
 * The ad's size in device independent pixels (dips).
 */
@property (nonatomic) CGSize adSize;

/* App details */

/**
 * The name of the app the SDK is being included in
 */
@property (nonatomic, copy) NSString *appName;

/**
 * The app store identifier for the app the SDK is being included in
 */
@property (nonatomic, copy) NSString *appStoreId;

/**
 * The app store identifier for the app the SDK is being included in
 */
@property (nonatomic, copy) NSString *appBundleId;

/**
 * The version of the client app the SDK is included in
 */
@property (nonatomic, copy) NSString *appVersion;


/* Performance details */

/**
 * Time taken in ms to perform a request or action
 */
@property (nonatomic, readonly) NSUInteger performanceDurationMs;


/* Request details */

/**
 * The unique ID created by the TradPlusAd ad server for the ad request
 */
@property (nonatomic, copy) NSString *requestId;

/**
 * The status code of the request from the TradPlusAd ad server
 */
@property (nonatomic) NSUInteger requestStatusCode;

/**
 * The full URI for the request to the adserver
 */
@property (nonatomic, copy) NSString *requestURI;

/**
 * The number of retries made in the request.
 */
@property (nonatomic) NSUInteger requestRetries;


/** SDK details */

/**
 * The current TradPlusAd SDK version, e.g. "3.1.0"
 */
@property (nonatomic, copy, readonly) NSString *sdkVersion;


/* Device details */

/**
 * The name of the device, e.g. iPhone, iPad, iPod
 */
@property (nonatomic, copy, readonly) NSString *deviceModel;

/**
 * The version of iOS running on the device, e.g. 8.0.1, 6.2.1, etc
 */
@property (nonatomic, copy, readonly) NSString *deviceOSVersion;

/**
 * The device's screen size in device independent pixels (dips).
 */
@property (nonatomic, readonly) CGSize deviceSize;

/* Geo details */

/**
 * Latitude and longitude
 */
@property (nonatomic, readonly) double geoLat;
@property (nonatomic, readonly) double geoLon;

/**
 * The radius of the circle in meters of the estimated accuracy of the latitude and longitude
 */
@property (nonatomic, readonly) double geoAccuracy;


/* Network/Carrier details */

@property (nonatomic, readonly) MSLogEventNetworkType networkType;
@property (nonatomic, copy, readonly) NSString *networkOperatorCode;
@property (nonatomic, copy, readonly) NSString *networkOperatorName;
@property (nonatomic, copy, readonly) NSString *networkISOCountryCode;
@property (nonatomic, copy, readonly) NSString *networkSIMCode;
@property (nonatomic, copy, readonly) NSString *networkSIMOperatorName;
@property (nonatomic, copy, readonly) NSString *networkSimISOCountryCode;

/* Client details */

/**
 * User specific, unique, resettable ID for advertising, i.e. IFA.
 */
@property (nonatomic, copy, readonly) NSString *clientAdvertisingId;

/**
 * Whether or not the user has limited ad tracking.
 */

@property (nonatomic, readonly) BOOL clientDoNotTrack;

- (instancetype)initWithEventCategory:(NSString *)eventCategory eventName:(NSString *)eventName;

- (NSString *)serialize;
- (NSDictionary *)asDictionary;

/**
 * Current timestamp in ms since January 1, 1970 00:00:00.0 UTC (aka epoch time)
 */
- (NSUInteger)timestampAsEpoch;

/**
 * Record the end time for a timed event. The start time will be the event's timestamp, which is
 * set on object creation. This will set the performanceDurationMs property with the timestamp - end time.
 */
- (void)recordEndTime;

/**
 * Convenience method to set common properties with the MSAdConfigurationLogEventProperties.
 */
- (void)setLogEventProperties:(MSAdConfigurationLogEventProperties *)logEventProperties;

@end
