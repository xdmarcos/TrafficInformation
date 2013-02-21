//
//  TIDetailViewController.h
//  TrafficInformation
//
//  Created by Marcos A. González Piñeiro on 21/02/13.
//  Copyright (c) 2013 Contact Comunicacion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TIDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
