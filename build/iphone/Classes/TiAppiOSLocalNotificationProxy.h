/**
 * hello_world_android__hello_world_android_titanium hello_world_android__hello_world_android_titanium Mobile
 * Copyright (c) 2009-2010 by hello_world_android__hello_world_android_titanium, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiProxy.h"

#ifdef USE_TI_APPIOS
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_4_0

@interface TiAppiOSLocalNotificationProxy : TiProxy {
@private
	UILocalNotification *notification;

}

@property(nonatomic,retain) UILocalNotification *notification;

-(void)cancel:(id)args;

@end


#endif
#endif