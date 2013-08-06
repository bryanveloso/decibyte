//
//  WindowController.m
//  Decibyte
//
//  Created by Bryan Veloso on 8/5/13.
//  Copyright (c) 2013 Revyver, Inc. All rights reserved.
//

#import "WindowController.h"

@interface WindowController ()

@end

@implementation WindowController

- (id)init
{
	self = [super init];
	if (self) { return [super initWithWindowNibName:@"Window"]; }
	return self;
}

@end
