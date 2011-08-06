/**
 * hello_world_android__hello_world_android_titanium hello_world_android__hello_world_android_titanium Mobile
 * Copyright (c) 2009-2010 by hello_world_android__hello_world_android_titanium, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UISCROLLVIEW

#import "TiUIView.h"

@interface TiUIScrollView : TiUIView<TiUIScrollView,UIScrollViewDelegate> {

@private
	UIScrollView * scrollView;
	UIView * wrapperView;
	TiDimension contentWidth;
	TiDimension contentHeight;
	
	CGFloat minimumContentHeight;
	
	BOOL needsHandleContentSize;
	
	id	lastFocusedView; //DOES NOT RETAIN.
}

@property(nonatomic,retain,readonly) UIScrollView * scrollView;

-(void)setNeedsHandleContentSize;
-(void)setNeedsHandleContentSizeIfAutosizing;
-(BOOL)handleContentSizeIfNeeded;
-(void)handleContentSize;

-(UIView *)wrapperView;


@end

#endif