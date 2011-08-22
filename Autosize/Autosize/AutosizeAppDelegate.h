//
//  AutosizeAppDelegate.h
//  Autosize
//
//  Created by Gabriel Ferreira on 22/08/11.
//  Copyright 2011 Concrete Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AutosizeViewController;

@interface AutosizeAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet AutosizeViewController *viewController;

@end
