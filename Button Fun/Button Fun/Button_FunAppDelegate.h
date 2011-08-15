//
//  Button_FunAppDelegate.h
//  Button Fun
//
//  Created by Gabriel Ferreira on 15/08/11.
//  Copyright 2011 Concrete Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Button_FunViewController;

@interface Button_FunAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Button_FunViewController *viewController;

@end
