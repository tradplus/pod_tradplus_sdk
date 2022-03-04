
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
- (void)AdShow;
- (void)AdClose;
- (void)AdShowFailWithError:(NSError *)error;
- (void)showFinish;
- (void)AdRewardedWithInfo:(NSDictionary *)info;

@property (nonatomic,weak)TradPlusAdWaterfallItem *waterfallItem;
@property (nonatomic,strong)NSMutableArray *downLoadURLArray;
@property (nonatomic,weak)UIViewController *rootViewController;
///是否ready
@property (nonatomic,assign)BOOL isAdReady;
@end
