
#import <TradPlusAds/TradPlusDataModel.h>

@interface TradPlusAdsourceplacementModel : TradPlusDataModel

///广告源id
@property (nonatomic,copy)NSString *id;
///bid的出价 广告cpm出价；固定为0
@property (nonatomic,copy)NSString *price;
///
@property (nonatomic,copy)NSString *price_cny;
///三方biddid， 后续竞价胜出后用于加载广告的token id；
@property (nonatomic,copy)NSString *bidid;
@property (nonatomic,assign)NSInteger bid_price;
///0 失败; 1 成功
@property (nonatomic,assign)NSInteger isbid;
///server返回码
@property (nonatomic,assign)NSInteger nbr;
///Win URL
@property (nonatomic,copy)NSString *nurl;
///Loss URL
@property (nonatomic,copy)NSString *lurl;
///DisplayNotification
@property (nonatomic,copy)NSString *impurl;
@property (nonatomic,copy)NSString *adm;
@property (nonatomic,strong)NSDictionary *payload;
@property (nonatomic,strong)NSDictionary *ext;
@property (nonatomic,strong)NSDictionary *originalDictionary;

///扩展数据
@property (nonatomic,strong)NSMutableDictionary *extraInfoDictionary;
@end

