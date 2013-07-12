//
//  ModelController.h
//  Helloworld
//
//  Created by cosmo ruan on 13-7-12.
//  Copyright (c) 2013年 cosmo ruan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
