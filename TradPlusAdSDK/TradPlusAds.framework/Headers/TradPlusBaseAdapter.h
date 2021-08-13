
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

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

//状态返回事件
- (void)AdLoadFinsh;
- (void)AdLoadFailWithError:(NSError *)error;
- (void)AdConfigError;
- (void)AdClick;
- (void)AdShow;
- (void)AdClose;
- (void)AdShowFailWithError:(NSError *)error;
- (void)showFinish;

@property (nonatomic,weak)TradPlusAdWaterfallItem *waterfallItem;
@property (nonatomic,strong)NSMutableArray *downLoadURLArray;
@property (nonatomic,weak)UIViewController *rootViewController;
@end
