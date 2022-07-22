//
//  TPADXNativeData.h
//  TestVast
//
//  Created by xuejun on 2021/10/26.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVideoView.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXNativeData : NSObject

@property (nonatomic,copy)NSString *title;
@property (nonatomic,copy)NSString *sponsored;
@property (nonatomic,copy)NSString *desc;
@property (nonatomic,copy)NSString *rating;
@property (nonatomic,copy)NSString *likes;
@property (nonatomic,copy)NSString *ctatext;
@property (nonatomic,copy)NSString *iconImageURL;
@property (nonatomic,copy)NSString *logoImageURL;
@property (nonatomic,copy)NSString *mainImageURL;
@property (nonatomic,assign)CGFloat iconHeight;
@property (nonatomic,assign)CGFloat iconWidth;
@property (nonatomic,assign)CGFloat mainImageHeight;
@property (nonatomic,assign)CGFloat mainImageWidth;

@property (nonatomic,copy)NSString *vastString;
//imptrackers
@property (nonatomic,strong)NSMutableArray <NSURL *>*imptrackers;
//link
@property (nonatomic,strong)NSURL *clickURL;
@property (nonatomic,strong)NSMutableArray <NSURL *>*clicktrackers;
@property (nonatomic,strong)NSURL *clickFallbackURL;

- (BOOL)parsing:(NSDictionary *)dic;
@end

NS_ASSUME_NONNULL_END
