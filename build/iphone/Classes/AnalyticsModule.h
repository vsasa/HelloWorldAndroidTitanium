/**
 * hello_world_android__hello_world_android_titanium hello_world_android__hello_world_android_titanium Mobile
 * Copyright (c) 2009-2010 by hello_world_android__hello_world_android_titanium, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#import "TiModule.h"
#import "PlausibleDatabase.h"

@interface AnalyticsModule : TiModule {
@private
	PLSqliteDatabase* database;
	NSTimer *retryTimer;
	NSTimer *flushTimer;
	NSURL *url;
	NSRecursiveLock *lock;
}

@end
