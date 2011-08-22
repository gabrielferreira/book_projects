//
//  SwapViewController.h
//  Swap
//
//  Created by Gabriel Ferreira on 22/08/11.
//  Copyright 2011 Concrete Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

#define degressToRadians(x) (M_PI * (x) / 180.0)

@interface SwapViewController : UIViewController {
    UIView *landscape;
    UIView *portrait;
    
    //Foo
    UIButton *landscapeFooButton;
    UIButton *portraitFooButton;
    
    //Bar
    UIButton *landscapeBarButton;
    UIButton *portraitBarButton;
}

@property (nonatomic, retain) IBOutlet UIView *landscape;
@property (nonatomic, retain) IBOutlet UIView *portrait;
@property (nonatomic, retain) IBOutlet UIView *landscapeFooButton;
@property (nonatomic, retain) IBOutlet UIView *portraitFooButton;
@property (nonatomic, retain) IBOutlet UIView *landscapeBarButton;
@property (nonatomic, retain) IBOutlet UIView *portraitBarButton;
- (IBAction)buttonPressed:(id)sender;

@end
