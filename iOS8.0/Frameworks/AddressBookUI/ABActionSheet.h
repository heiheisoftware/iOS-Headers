//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActionSheet.h"

@interface ABActionSheet : UIActionSheet
{
    struct __CFArray *_tags;
    struct __CFArray *_tag2s;
    struct __CFArray *_tag3s;
    struct __CFArray *_tag4s;
    void *_ab_context;
}

@property(nonatomic) void *ab_context; // @synthesize ab_context=_ab_context;
- (int)ab_addButtonWithTitle:(id)arg1 tag:(int)arg2;
- (int)ab_addButtonWithTitle:(id)arg1 tag:(int)arg2 tag2:(int)arg3;
- (const void *)ab_tag4AtIndex:(int)arg1;
- (const void *)ab_tag3AtIndex:(int)arg1;
- (int)ab_tag2AtIndex:(int)arg1;
- (int)ab_tagAtIndex:(int)arg1;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4 tag3:(const void *)arg5 tag4:(const void *)arg6;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4 tag3:(const void *)arg5;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3;
- (void)dealloc;
- (id)init;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (int)_addButtonWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

