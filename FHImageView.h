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

enum _FHImageScaling {
	FHScaleNone						= 1,
	FHScaleProportionally,
	FHScaleWidthProportionally,
	FHScaleHeightProportionally,
	FHScaleStretched,
	FHScaleStretchedProportionally,
	FHScaleZoomed,
};
typedef enum _FHImageScaling		FHImageScaling;


@class FHImage;

@interface FHImageView : NSView {
	IBOutlet id						_delegate;
	
	IBOutlet NSScrollView			*_scrollView;
	
	FHImage							*_image;
	FHImage							*_leftImage, *_rightImage;
	
	FHImageScaling					_imageScaling;
	CGFloat							_imageRotation;
	CGFloat							_imageZoom;

	NSSize							_imageSize, _leftImageSize, _rightImageSize;
	NSSize							_rotatedImageSize, _rotatedLeftImageSize, _rotatedRightImageSize;
	CGFloat							_imageOrientation, _leftImageOrientation, _rightImageOrientation;
	CGFloat							_imageAngle, _leftImageAngle, _rightImageAngle;
	
	NSUInteger						_currentFrame, _frames;
	
	NSTimer							*_timer;
	
	NSColor							*_backgroundColor;
	
	BOOL							_dragging;
	BOOL							_adjustingFrameSize;
	FHImageScaling					_adjustedImageScaling;
	CGFloat							_scrollingOffset;
	BOOL							_switchedImage;
	
	CGFloat							_magnification;
	NSTimeInterval					_magnificationTime;
	CGFloat							_rotation;
	NSTimeInterval					_rotationTime;
}

- (void)setImage:(FHImage *)image;
- (FHImage *)image;
- (void)setLeftImage:(FHImage *)leftImage rightImage:(FHImage *)rightImage;
- (FHImage *)leftImage;
- (FHImage *)rightImage;
- (NSSize)imageSize;
- (CGFloat)zoom;
- (void)setImageScaling:(FHImageScaling)newScaling;
- (FHImageScaling)imageScaling;
- (void)setImageZoom:(CGFloat)zoom;
- (CGFloat)imageZoom;
- (void)setImageRotation:(CGFloat)rotation;
- (CGFloat)imageRotation;
- (void)setBackgroundColor:(NSColor *)color;
- (NSColor *)backgroundColor;

@end
