
@interface TradPlusBaseAdapter ()

@property (nonatomic,copy)void (^loadFinishAct)(void);
@property (nonatomic,copy)void (^loadFailAct)(NSError *error);
@property (nonatomic,copy)void (^configErrorAct)(void);

@property (nonatomic,copy)void (^pasterPlayFinish)(TradPlusAdWaterfallItem *waterfallItem);
@property (nonatomic,copy)void (^clickAct)(TradPlusAdWaterfallItem *waterfallItem);
//1300
@property (nonatomic,copy)void (^showAct)(TradPlusAdWaterfallItem *waterfallItem);
@property (nonatomic,copy)void (^showFailAct)(TradPlusAdWaterfallItem *waterfallItem,NSError *error);
@property (nonatomic,copy)void (^closeAct)(TradPlusAdWaterfallItem *waterfallItem);
//对应1100埋点
@property (nonatomic,copy)void (^showFinishAct)(TradPlusAdWaterfallItem *waterfallItem);

@property (nonatomic,copy)void (^didCloseOtherControllerAct)(TradPlusAdWaterfallItem *waterfallItem);

@property (nonatomic,copy)void (^rewardedAct)(TradPlusAdWaterfallItem *waterfallItem , NSDictionary *info, BOOL playAgain);

///加载扩展接口 info中包括返回的数据 事件及其他信息等 例：@{@"event":@"loadx"}
@property (nonatomic,copy)void (^extraLoadCallback)(TradPlusAdWaterfallItem *waterfallItem,NSDictionary *info);
///展示扩展接口 info中包括返回的数据 事件及其他信息等 例：@{@"event":@"loadx"}
@property (nonatomic,copy)void (^extraShowCallback)(TradPlusAdWaterfallItem *waterfallItem,NSDictionary *info);

///积分墙相关接口
@property (nonatomic,copy)void (^offerwallAct)(TradPlusAdWaterfallItem *waterfallItem,NSDictionary *info, NSError *error);
@end
