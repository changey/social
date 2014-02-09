//
//  AppDelegate.h
//  TKContactsMultiPicker
//
//  Created by Jongtae Ahn on 12. 8. 31..
//  Copyright (c) 2012년 TABKO Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainViewController;
@class RootViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navigationController;
@property (strong, nonatomic) MainViewController *mainViewController;
@property (strong, nonatomic) RootViewController *rootViewController;

@end
