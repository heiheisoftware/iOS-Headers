//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface CalMemorySensor : NSObject
{
    unsigned int _interval;
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _usage;
    CDUnknownBlockType _fireBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fireBlock; // @synthesize fireBlock=_fireBlock;
@property(readonly, nonatomic) unsigned int usage; // @synthesize usage=_usage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)defaultMessageTraceForApp:(id)arg1;
- (void)_monitorMemory;
- (void)stopMonitoringMemory;
- (void)startMonitoringMemory;
- (void)_setupTimer;
- (id)init;
- (id)initWithMonitorInterval:(unsigned int)arg1;

@end

