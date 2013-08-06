//
//  ApplicationController.h
//  Decibyte
//
//  Created by Bryan Veloso on 8/5/13.
//  Copyright (c) 2013 Revyver, Inc. All rights reserved.
//

#import "DecibyteApplication.h"

@interface ApplicationController : NSObject <DecibyteApplicationDelegate> {}

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
