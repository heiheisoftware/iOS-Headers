/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CMDrawingAction : NSObject
{
    int _type;
    id _value;
    float _floatValue;
}

- (id)initWithType:(int)arg1 andValue:(id)arg2;
- (id)initWithType:(int)arg1 andFloatValue:(float)arg2;
- (void)dealloc;
- (int)type;
- (id)value;
- (float)floatValue;
- (id)description;

@end

