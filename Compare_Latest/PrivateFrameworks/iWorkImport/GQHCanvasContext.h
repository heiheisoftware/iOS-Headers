/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQHContext-Protocol.h"

@class GQDAffineGeometry, NSMutableString;

@interface GQHCanvasContext : NSObject <GQHContext>
{
    GQDAffineGeometry *mGeometry;
    NSMutableString *mFunctionName;
    BOOL mHasFill;
    BOOL mHasStroke;
    struct __CFString *mBezierStr;
}

- (void)dealloc;
- (void)addScriptTagToHtml:(id)arg1 state:(id)arg2;
- (void)prepareContext:(id)arg1;
- (void)teardownContext:(id)arg1;
- (void)createShapeWithId:(struct __CFString *)arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(BOOL)arg5 state:(id)arg6;
- (void)createMaskedImageWithId:(struct __CFString *)arg1 path:(id)arg2 geometry:(id)arg3 cropGeometry:(id)arg4 imageBinary:(id)arg5 graphicStyle:(id)arg6 isFloating:(BOOL)arg7 state:(id)arg8;
- (void)setContextOpacity:(float)arg1 state:(id)arg2;
- (void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3;
- (void)setFillColor:(id)arg1 state:(id)arg2;
- (void)setGradient:(id)arg1 state:(id)arg2;
- (void)setImageFill:(struct __CFURL *)arg1 srcSize:(struct CGSize)arg2 mode:(int)arg3 state:(id)arg4;
- (void)setBezierPath:(char *)arg1 state:(id)arg2;
- (void)translate:(struct CGSize)arg1 state:(id)arg2;
- (void)mapStyle:(id)arg1 state:(id)arg2;
- (void)mapFill:(id)arg1 state:(id)arg2;
- (void)mapStroke:(id)arg1 state:(id)arg2;
- (void)mapLineEndFillStyle:(id)arg1 state:(id)arg2;
- (void)mapLineEndStrokeStyle:(id)arg1 state:(id)arg2;
- (struct GQHPathEndPointInfo)endPointInfoForPath:(struct CGPath *)arg1;
- (float)strokeWidthWithGraphicStyle:(id)arg1;
- (id)strokeColorWithGraphicStyle:(id)arg1;
- (void)addPathForLineEndStyle:(int)arg1 graphicStyle:(id)arg2 atPoint:(struct CGPoint)arg3 neighboringCP:(struct CGPoint)arg4 filledPath:(struct CGPath **)arg5 strokedPath:(struct CGPath **)arg6;
- (void)setCGPath:(struct CGPath *)arg1 state:(id)arg2;

@end
