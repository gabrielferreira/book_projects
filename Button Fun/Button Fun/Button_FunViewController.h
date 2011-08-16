//
//  Button_FunViewController.h
//  Button Fun
//
//  Created by Gabriel Ferreira on 15/08/11.
//  Copyright 2011 Concrete Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Button_FunViewController : UIViewController {
    UILabel *statusText;
}
@property (nonatomic, retain) IBOutlet UILabel *statusText;
- (IBAction)buttonPressed:(id)sender;
@end
