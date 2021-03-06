/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PTPStartDataPacket : NSObject
{
    unsigned int _transactionID;
    unsigned long long _totalDataSize;
}

- (void)setTotalDataSize:(unsigned long long)arg1;
- (unsigned long long)totalDataSize;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned int)transactionID;
- (id)description;
- (id)contentForTCP;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)initWithTransactionID:(unsigned int)arg1 totalDataSize:(unsigned long long)arg2;

@end

