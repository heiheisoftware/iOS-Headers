//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BLAlertAction : NSObject
{
    CDUnknownBlockType _block;
    NSString *_name;
}

+ (id)cancelAction;
+ (id)actionWithName:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 andBlock:(CDUnknownBlockType)arg2;

@end

