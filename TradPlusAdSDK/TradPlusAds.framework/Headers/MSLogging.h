//
//  MSLogging.h
//  AdExpress
//
//  Copyright 2016 TradPlusAd, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/MSConstants.h>

// Lower = finer-grained logs.
typedef enum
{
    MSLogLevelAll        = 0,
    MSLogLevelTrace        = 10,
    MSLogLevelDebug        = 20,
    MSLogLevelInfo        = 30,
    MSLogLevelWarn        = 40,
    MSLogLevelError        = 50,
    MSLogLevelFatal        = 60,
    MSLogLevelOff        = 70
} MSLogLevel;

MSLogLevel MSLogGetLevel(void);
void MSLogSetLevel(MSLogLevel level);
FOUNDATION_EXPORT void _MSLogTrace(NSString *format, ...)NS_FORMAT_FUNCTION(1,2) NS_NO_TAIL_CALL;
FOUNDATION_EXPORT void _MSLogDebug(NSString *format, ...)NS_FORMAT_FUNCTION(1,2) NS_NO_TAIL_CALL;
FOUNDATION_EXPORT void _MSLogInfo(NSString *format, ...)NS_FORMAT_FUNCTION(1,2) NS_NO_TAIL_CALL;
FOUNDATION_EXPORT void _MSLogWarn(NSString *format, ...)NS_FORMAT_FUNCTION(1,2) NS_NO_TAIL_CALL;
FOUNDATION_EXPORT void _MSLogError(NSString *format, ...)NS_FORMAT_FUNCTION(1,2) NS_NO_TAIL_CALL;
FOUNDATION_EXPORT void _MSLogFatal(NSString *format, ...)NS_FORMAT_FUNCTION(1,2) NS_NO_TAIL_CALL;

#if MS_DEBUG_MODE && !SPECS

#define MSLogTrace(...) _MSLogTrace(__VA_ARGS__)
#define MSLogDebug(...) _MSLogDebug(__VA_ARGS__)
#define MSLogInfo(...) _MSLogInfo(__VA_ARGS__)
#define MSLogWarn(...) _MSLogWarn(__VA_ARGS__)
#define MSLogError(...) _MSLogError(__VA_ARGS__)
#define MSLogFatal(...) _MSLogFatal(__VA_ARGS__)

#else

#define MSLogTrace(...) {}
#define MSLogDebug(...) {}
#define MSLogInfo(...) {}
#define MSLogWarn(...) {}
#define MSLogError(...) {}
#define MSLogFatal(...) {}

#endif
