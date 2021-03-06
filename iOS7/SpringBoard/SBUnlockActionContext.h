/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SBUnlockActionContext : NSObject
{
    NSString *_lockLabel;
    NSString *_shortLockLabel;
    id _unlockAction;
    NSString *_identifier;
    double _fontSize;
    _Bool _requiresUnlock;
    _Bool _deactivateAwayController;
    _Bool _canBypassPinLock;
}

@property(nonatomic) _Bool canBypassPinLock; // @synthesize canBypassPinLock=_canBypassPinLock;
@property(nonatomic) _Bool deactivateAwayController; // @synthesize deactivateAwayController=_deactivateAwayController;
@property(nonatomic) _Bool requiresUnlock; // @synthesize requiresUnlock=_requiresUnlock;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) id unlockAction; // @synthesize unlockAction=_unlockAction;
@property(retain, nonatomic) NSString *shortLockLabel; // @synthesize shortLockLabel=_shortLockLabel;
@property(retain, nonatomic) NSString *lockLabel; // @synthesize lockLabel=_lockLabel;
@property(readonly, nonatomic) _Bool hasCustomUnlockLabel;
- (void)dealloc;
- (id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 unlockAction:(id)arg3 identifier:(void)arg4;

@end

