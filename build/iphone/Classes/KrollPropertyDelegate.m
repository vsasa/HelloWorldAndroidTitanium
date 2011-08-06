/**
 * hello_world_android__hello_world_android_titanium hello_world_android__hello_world_android_titanium Mobile
 * Copyright (c) 2009-2010 by hello_world_android__hello_world_android_titanium, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#import "KrollPropertyDelegate.h"


@implementation KrollPropertyDelegate

-(id)initWithTarget:(id)target_ selector:(SEL)selector_
{
	if (self = [super init])
	{
		target = [target_ retain];
		selector = selector_;
	}
	return self;
}

-(void)dealloc
{
	[target release];
	[super dealloc];
}

-(id)target
{
	return target;
}

-(SEL)selector
{
	return selector;
}

@end
