/**
 * hello_world_android__hello_world_android_titanium hello_world_android__hello_world_android_titanium Mobile
 * Copyright (c) 2009-2010 by hello_world_android__hello_world_android_titanium, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UITAB

#import "TiWindowProxy.h"
#import "TiTabGroup.h"

@interface TiUITabGroupProxy : TiWindowProxy<TiTabGroup>
{
@private
	NSMutableArray *tabs;
}

-(UITabBar*)tabbar;
-(void)_resetTabArray:(NSArray*)newTabOrder; // Used in tab reordering 
@end

#endif