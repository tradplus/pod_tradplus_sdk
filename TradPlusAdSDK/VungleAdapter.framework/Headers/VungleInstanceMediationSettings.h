#import <TradPlusAds/MSMediationSettingsProtocol.h>

@interface VungleInstanceMediationSettings : NSObject <MSMediationSettingsProtocol>

/*
 * An NSString that's used as an identifier for a specific user, and is passed along to Vungle
 * when the rewarded video ad is played.
 */
@property (nonatomic, copy) NSString *userIdentifier;

@property (nonatomic, assign) NSUInteger ordinal;

@property (nonatomic, assign) NSTimeInterval flexViewAutoDismissSeconds;
@end
