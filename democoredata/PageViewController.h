//
//  PageViewController.h
//  democoredata
//
//  Created by Clonet on 9/19/14.
//  Copyright (c) 2014 Clonet. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageAppDelegate.h"
@interface PageViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *phone;
@property (strong, nonatomic) IBOutlet UILabel *status;
- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;
- (IBAction)deleteContact:(id)sender;
@end
