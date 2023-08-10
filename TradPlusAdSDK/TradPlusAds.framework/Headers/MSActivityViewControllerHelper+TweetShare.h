#import <Foundation/Foundation.h>
#import <TradPlusAds/MSActivityViewControllerHelper.h>

/**
 * `TweetShare` category added to MSActivityViewController to add functionality
 * for sharing a tweet.
 */

@interface MSActivityViewControllerHelper (TweetShare)

/**
 * Present the UIActivityViewController as specified by the
 * provided URL.
 *
 * @param URL Instance of NSURL to be used for generating
 * the share sheet. Should be of the format:
 * share://tweet?screen_name=<SCREEN_NAME>&tweet_id=<TWEET_ID>
 *
 * @return a BOOL indicating whether or not the tweet share url was successfully shown
 */

- (BOOL)presentActivityViewControllerWithTweetShareURL:(NSURL *)URL;

@end
