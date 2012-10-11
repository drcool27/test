//
//  DataViewController.h
//  test
//
//  Created by Hans Guignard on 10/11/12.
//  Copyright (c) 2012 Hans Guignard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
