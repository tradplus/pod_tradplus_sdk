
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

///广告视图
extern NSString * const kTPRendererAdView;
///广告标题
extern NSString * const kTPRendererTitleLable;
///广告描述
extern NSString * const kTPRendererTextLable;
///广告按钮
extern NSString * const kTPRendererCtaLabel;
///广告图标
extern NSString * const kTPRendererIconView;
//广告主图
extern NSString * const kTPRendererMainImageView;
//广告MediaView
extern NSString * const kTPRendererMediaView;
//AdChoice图标
extern NSString * const kTPRendererAdChoiceImageView;

@class TradPlusAdWaterfallItem;
@interface TradPlusBaseAdapter : NSObject

///初始化三方SDK（子类必须声明实现）
- (void)loadAdWithWaterfallItem:(TradPlusAdWaterfallItem *)item;
///子类必须声明实现
- (BOOL)isReady;
///返回三方资源类
- (id)getCustomObject;
///开始渲染时的事件处理
- (void)startRender;
///结束渲染后的事件处理
- (UIView *)endRender:(NSDictionary *)viewInfo clickView:(NSArray *)array;
///模版类型渲染
- (void)templateRender:(UIView *)subView;
///drawList
- (NSArray <UIView *>*)getDrawList;
///draw信息流
- (UIView *)drawRender:(UIView *)subView;
///渲染完成后添加到subview时
- (void)didAddSubView;
///释放前处理
- (void)adViewWillDestroy;
///banner add时
- (void)bannerDidAddSubView:(UIView *)subView;
///点击后三方的viewController关闭时
- (void)didCloseOtherController;
///插屏 激励视频show
- (void)showAdFromRootViewController:(UIViewController *)rootViewController;
///开屏 show
- (void)showAdInWindow:(UIWindow *)window bottomView:(UIView *)bottomView;
//状态返回事件
- (void)AdLoadFinsh;
- (void)AdLoadFailWithError:(NSError *)error;
- (void)AdConfigError;
- (void)AdClick;
///限制一个Adapter只能触发一次
- (void)AdShow;
///需要多次触发时使用此方法，例：draw信息流
- (void)AdShowNoLimit;
///插屏 激励视频关闭事件，部分 原生 banner 国内源附带关闭功能
- (void)AdClose;
- (void)AdShowFailWithError:(NSError *)error;
- (void)showFinish;
- (void)AdRewardedWithInfo:(NSDictionary *)info;
//再看一次奖励回调
- (void)AdPlayAgainRewardedWithInfo:(NSDictionary *)info;
//贴片播放完成事件
- (void)AdPasterPlayFinish;

- (void)setBannerCenterWithBanner:(UIView *)banner subView:(UIView *)subView;

@property (nonatomic,weak)TradPlusAdWaterfallItem *waterfallItem;
@property (nonatomic,strong)NSMutableArray *downLoadURLArray;
@property (nonatomic,weak)UIViewController *rootViewController;
///是否ready
@property (nonatomic,assign)BOOL isAdReady;
@property (nonatomic,assign)BOOL didShow;

@property (nonatomic,assign)NSTimeInterval showTime;


///扩展事件，传入名称及相关数据 Adapter继承，
///引擎或广告对象通过此接口将事件及相关数据 传递到Adapter，Adapter则根据事件进行处理
///返回 NO = Adapter不支持此事件 YES = 支持
- (BOOL)extraActWithEvent:(NSString *)event info:(NSDictionary *)info;
///Adapter 可在loaded前通过此接口向引擎进行回调
- (void)ADLoadExtraCallbackWithEvent:(NSString *)event info:(NSDictionary *)info;
///Adapter 可在show之后通过此接口向广告对象进行回调
- (void)ADShowExtraCallbackWithEvent:(NSString *)event info:(NSDictionary *)info;
@end
