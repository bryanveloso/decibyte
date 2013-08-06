//
//  DecibyteApplication.h
//  Decibyte
//
//  Created by Bryan Veloso on 8/5/13.
//  Copyright (c) 2013 Revyver, Inc. All rights reserved.
//

@protocol DecibyteApplicationDelegate <NSApplicationDelegate>

@end

@interface DecibyteApplication : NSApplication

@property (nonatomic, unsafe_unretained) id <DecibyteApplicationDelegate> delegate;

@end
