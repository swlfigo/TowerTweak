//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSOperationQueue;

@interface GTDiffImageRenderer : NSObject
{
    NSColor *_checkerboardSquareColor;
    NSColor *_checkerboardBackgroundColor;
    NSColor *_imageBorderColor;
    NSColor *_backgroundColor;
    NSOperationQueue *_renderingQueue;
}

+ (struct CGSize)canvasSizeForDeletedImage:(id)arg1 addedImage:(id)arg2 borderWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSColor *imageBorderColor; // @synthesize imageBorderColor=_imageBorderColor;
@property(retain, nonatomic) NSColor *checkerboardBackgroundColor; // @synthesize checkerboardBackgroundColor=_checkerboardBackgroundColor;
@property(retain, nonatomic) NSColor *checkerboardSquareColor; // @synthesize checkerboardSquareColor=_checkerboardSquareColor;
- (id)errorWithMessage:(id)arg1;
- (void)rendererDidFailToRenderImagesWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rendererDidRenderAddedImage:(id)arg1 deletedImage:(id)arg2 addedImageSize:(struct CGSize)arg3 deletedImageSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)drawBorderInImage:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 lineWidth:(double)arg4;
- (void)drawImage:(id)arg1 intoCanvas:(id)arg2 rect:(struct CGRect)arg3;
- (id)canvasImageWithSize:(struct CGSize)arg1;
- (struct CGRect)centerRectForImageSize:(struct CGSize)arg1 canvasSize:(struct CGSize)arg2;
- (id)checkerboardPatternImage;
- (BOOL)isImageUsingTransparency:(id)arg1;
- (void)renderImagesForAddedImageData:(id)arg1 deletedImageData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

