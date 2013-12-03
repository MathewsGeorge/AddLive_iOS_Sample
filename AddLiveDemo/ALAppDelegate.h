/*
 * Copyright (C) LiveFoundry Inc 2012
 *
 * All rights reserved. Any use, copying, modification, distribution and selling
 * of this software and it's documentation for any purposes without authors' written
 * permission is hereby prohibited.
 */

#import <UIKit/UIKit.h>

@class ALViewController;

@interface ALAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ALViewController *viewController;

@end
