//
//  TIMasterViewController.h
//  TrafficInformation
//
//  Created by Marcos A. González Piñeiro on 21/02/13.
//  Copyright (c) 2013 Contact Comunicacion. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface TIMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
