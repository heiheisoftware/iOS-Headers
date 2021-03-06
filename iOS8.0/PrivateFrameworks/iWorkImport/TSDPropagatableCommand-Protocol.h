//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDChangePropagationMap;

@protocol TSDPropagatableCommand <NSObject>
- (void)populateChangePropagationMapAfterCommit:(TSDChangePropagationMap *)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(BOOL (^)(id))arg1;

@optional
- (void)populateChangePropagationMapBeforeCommit:(TSDChangePropagationMap *)arg1;
- (BOOL)shouldBePropagated;
@end

