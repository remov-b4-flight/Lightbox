/* $Id$ */

/*
 *  Copyright (c) 2003-2009 Axel Andersson
 *  All rights reserved.
 * 
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#import "FHHandler.h"
#import "FHImageView.h"
#import "FHSettings.h"

@implementation FHSettings

+ (NSDictionary *)defaults {
	return [NSDictionary dictionaryWithObjectsAndKeys:
		[[WIURL fileURLWithPath:NSHomeDirectory()] string],
			FHOpenURL,
		[NSNumber numberWithInt:FHScaleProportionally],
			FHImageScalingMethod,
		[NSNumber numberWithFloat:0.0f],
			FHImageRotation,
		[NSNumber numberWithFloat:1.0f],
			FHImageZoom,
		[NSNumber numberWithInt:0],
			FHFullscreenScreen,
		[NSNumber numberWithInt:FHFullscreenBackgroundBlack],
			FHFullscreenBackground,
		[NSNumber numberWithBool:NO],
			FHFullscreenAutoSwitch,
		[NSNumber numberWithInt:5],
			FHFullscreenAutoSwitchTime,
		[NSNumber numberWithInt:FHHTMLImageBothInlineAndLinks],
			FHHTMLImageType,
		[NSNumber numberWithBool:YES],
			FHShowStatusBar,
		[NSNumber numberWithInt:FHSpreadNone],
			FHSpreadMode,
		[NSNumber numberWithBool:NO],
			FHSpreadRightToLeft,
		WIStringFromColor([NSColor whiteColor]),
			FHBackgroundColor,
		NULL];
}

@end
