//
//  MSTableViewCellImpressionTracker.h
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol MSTableViewCellImpressionTrackerDelegate;

@interface MSTableViewCellImpressionTracker : NSObject

- (id)initWithTableView:(UITableView *)tableView delegate:(id<MSTableViewCellImpressionTrackerDelegate>)delegate;
- (void)startTracking;
- (void)stopTracking;

@end

@protocol MSTableViewCellImpressionTrackerDelegate <NSObject>

- (void)tracker:(MSTableViewCellImpressionTracker *)tracker didDetectVisibleRowsAtIndexPaths:(NSArray *)indexPaths;

@end
