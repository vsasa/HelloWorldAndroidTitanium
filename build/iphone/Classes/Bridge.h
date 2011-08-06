/**
 * hello_world_android__hello_world_android_titanium hello_world_android__hello_world_android_titanium Mobile
 * Copyright (c) 2009-2010 by hello_world_android__hello_world_android_titanium, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiProxy.h"

@class TiHost;

@interface Bridge : NSObject {
@private
	id callback;
	NSString *basename;
@protected
	NSURL *url;
	TiHost *host;
}

-(id)initWithHost:(TiHost*)host;

-(void)boot:(id)callback url:(NSURL*)url preload:(NSDictionary*)preload;

-(void)booted;

-(void)shutdown:(NSCondition*)condition;

-(void)gc;

-(TiHost*)host;

- (NSString*)basename;

@end
