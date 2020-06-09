//
//  FacebookNativeCustomEvent.h
//  AdExpress
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#if __has_include(<MeetSocial/MeetSocial.h>)
    #import <MeetSocial/MeetSocial.h>
#else
    #import <TradPlusAds/MSNativeCustomEvent.h>
#endif

/**
 * Certified with the Facebook iOS SDK version 4.15.1
 */

@interface FacebookNativeCustomEvent : MSNativeCustomEvent


/**
 * Toggle FB video ads on/off. If it is enabled, it means you are open yourself to video inventory.
 * If it is not enabled, it is gauranteed you won't get video ads.
 *
 * IMPORTANT: If you choose to use this method, be sure to call it before making any ad requests,
 * and avoid calling it more than once.
 */

+ (void)setVideoEnabled:(BOOL)enabled;

@end
