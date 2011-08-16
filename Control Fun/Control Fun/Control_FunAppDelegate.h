//
//  Control_FunAppDelegate.h
//  Control Fun
//
//  Created by Gabriel Ferreira on 16/08/11.
//  Copyright 2011 Concrete Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Control_FunViewController;

@interface Control_FunAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Control_FunViewController *viewController;

@end
