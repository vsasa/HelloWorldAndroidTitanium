/**
 * hello_world_android__hello_world_android_titanium hello_world_android__hello_world_android_titanium Mobile
 * Copyright (c) 2009-2010 by hello_world_android__hello_world_android_titanium, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIIPADDOCUMENTVIEWER

#import "TiProxy.h"

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

@interface TiUIiPadDocumentViewerProxy : TiProxy<UIDocumentInteractionControllerDelegate> {
@private
	UIDocumentInteractionController *controller;
}

@property(nonatomic,readwrite,assign) id url;
@property(nonatomic,readonly) id icons;
@property(nonatomic,readonly) id name;


@end

#endif

#endif