//
//  AppDelegate.h
//  LeftMenuArcRoot
//
//  Created by ryan on 12/11/14.
//  Copyright (c) 2014 Ryan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StartViewController.h"
#import "PannelViewController.h"
#import "RootNaviViewController.h"
#import "RootTabBarViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, strong) StartViewController *startViewController;
@property (nonatomic, strong) PannelViewController *pannelViewController;
@property (nonatomic, strong) RootNaviViewController *contentNaviController;
@property (nonatomic, strong) RootTabBarViewController *rootTabBarViewController;

@end

