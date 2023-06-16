//
//  MsHTTPNetworkSession.h
//
//  Copyright 2018-2019 TradPlusAd, Inc.
//  Licensed under the TradPlus SDK License Agreement
//
//kCFURLErrorUnknown   = -998,
//kCFURLErrorCancelled = -999,
//kCFURLErrorBadURL    = -1000,
//kCFURLErrorTimedOut  = -1001,
//kCFURLErrorUnsupportedURL = -1002,
//kCFURLErrorCannotFindHost = -1003,
//kCFURLErrorCannotConnectToHost    = -1004,
//kCFURLErrorNetworkConnectionLost  = -1005,
//kCFURLErrorDNSLookupFailed        = -1006,
//kCFURLErrorHTTPTooManyRedirects   = -1007,
//kCFURLErrorResourceUnavailable    = -1008,
//kCFURLErrorNotConnectedToInternet = -1009,
//kCFURLErrorRedirectToNonExistentLocation = -1010,
//kCFURLErrorBadServerResponse             = -1011,
//kCFURLErrorUserCancelledAuthentication   = -1012,
//kCFURLErrorUserAuthenticationRequired    = -1013,
//kCFURLErrorZeroByteResource        = -1014,
//kCFURLErrorCannotDecodeRawData     = -1015,
//kCFURLErrorCannotDecodeContentData = -1016,
//kCFURLErrorCannotParseResponse     = -1017,
//kCFURLErrorInternationalRoamingOff = -1018,
//kCFURLErrorCallIsActive               = -1019,
//kCFURLErrorDataNotAllowed             = -1020,
//kCFURLErrorRequestBodyStreamExhausted = -1021,
//kCFURLErrorFileDoesNotExist           = -1100,
//kCFURLErrorFileIsDirectory            = -1101,
//kCFURLErrorNoPermissionsToReadFile    = -1102,
//kCFURLErrorDataLengthExceedsMaximum   = -1103,
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface MsHTTPNetworkSession : NSObject
/**
 Singleton instance of @c MsHTTPNetworkSession.
 */
+ (instancetype)sharedInstance;

/**
 Initializes a HTTP network request.
 @param request Request to send.
 @param responseHandler Optional response handler that will be invoked on the current thread.
 @param errorHandler Optional error handler that will be invoked on the current thread.
 @param shouldRedirectWithNewRequest Optional logic control block to determine if a redirection should occur. This is invoked on the current thread.
 @returns The HTTP networking task.
 */
+ (NSURLSessionTask *)taskWithHttpRequest:(NSURLRequest *)request
                          responseHandler:(void (^ _Nullable)(NSData * data, NSHTTPURLResponse * response))responseHandler
                             errorHandler:(void (^ _Nullable)(NSError * error))errorHandler
             shouldRedirectWithNewRequest:(BOOL (^ _Nullable)(NSURLSessionTask * task, NSURLRequest * newRequest))shouldRedirectWithNewRequest;

/**
 Initializes a HTTP network request and immediately sends it.
 @param request Request to send.
 @returns The HTTP networking task.
 */
+ (NSURLSessionTask *)startTaskWithHttpRequest:(NSURLRequest *)request;

/**
 Initializes a HTTP network request and immediately sends it.
 @param request Request to send.
 @param responseHandler Optional response handler that will be invoked on the main thread.
 @param errorHandler Optional error handler that will be invoked on the main thread.
 @returns The HTTP networking task.
 */
+ (NSURLSessionTask *)startTaskWithHttpRequest:(NSURLRequest *)request
                               responseHandler:(void (^ _Nullable)(NSData * data, NSHTTPURLResponse * response))responseHandler
                                  errorHandler:(void (^ _Nullable)(NSError * error))errorHandler;

/**
 Initializes a HTTP network request and immediately sends it.
 @param request Request to send.
 @param responseHandler Optional response handler that will be invoked on the main thread.
 @param errorHandler Optional error handler that will be invoked on the main thread.
 @param shouldRedirectWithNewRequest Optional logic control block to determine if a redirection should occur. This is invoked on the current thread.
 @returns The HTTP networking task.
 */
+ (NSURLSessionTask *)startTaskWithHttpRequest:(NSURLRequest *)request
                               responseHandler:(void (^ _Nullable)(NSData * data, NSHTTPURLResponse * response))responseHandler
                                  errorHandler:(void (^ _Nullable)(NSError * error))errorHandler
                  shouldRedirectWithNewRequest:(BOOL (^ _Nullable)(NSURLSessionTask * task, NSURLRequest * newRequest))shouldRedirectWithNewRequest;
@end
NS_ASSUME_NONNULL_END
