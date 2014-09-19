//
//  PageAppDelegate.h
//  democoredata
//
//  Created by Clonet on 9/18/14.
//  Copyright (c) 2014 Clonet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
