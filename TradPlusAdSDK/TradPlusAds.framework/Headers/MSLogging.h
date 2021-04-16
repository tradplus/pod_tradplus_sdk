//
//  MSLogging.h
//  AdExpress
//
//  Copyright 2016 TradPlusAd, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSConstants.h"

extern NSString * const gMPClearErrorLogFormatWithAdUnitID;
extern NSString * const gMPWarmingUpErrorLogFormatWithAdUnitID;

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
void _MSLogTrace(NSString *format, ...);
void _MSLogDebug(NSString *format, ...);
void _MSLogInfo(NSString *format, ...);
void _MSLogWarn(NSString *format, ...);
void _MSLogError(NSString *format, ...);
void _MSLogFatal(NSString *format, ...);

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
