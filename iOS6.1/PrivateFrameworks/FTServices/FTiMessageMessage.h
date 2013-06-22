/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FTServices/FTMessage.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSNumber;

@interface FTiMessageMessage : FTMessage <NSCopying>
{
    NSNumber *_wantsDeliveryStatus;
    NSDictionary *_deliveryStatusContext;
    NSNumber *_version;
}

@property(copy) NSNumber *version; // @synthesize version=_version;
@property(copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property(copy) NSNumber *wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
- (BOOL)wantsUserAgentInHeaders;
- (id)userAgentHeaderString;
- (id)messageBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsAPSRetries;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
