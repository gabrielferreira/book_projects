//
//  ViewSwitcherAppDelegate.h
//  ViewSwitcher
//
//  Created by Gabriel Ferreira on 23/08/11.
//  Copyright 2011 Concrete Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SwitchViewController;
@interface ViewSwitcherAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    SwitchViewController *switchViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SwitchViewController *switchViewController;

@end
