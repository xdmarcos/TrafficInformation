//
//  TIAppDelegate.h
//  TrafficInformation
//
//  Created by Marcos A. González Piñeiro on 21/02/13.
//  Copyright (c) 2013 Contact Comunicacion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TIAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
