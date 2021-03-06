/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString;

@interface CKSpotlightSearchResult : NSObject
{
    NSString *_chatGUID;
    NSString *_messageGUID;
    NSString *_summary;
    NSDate *_messageDate;
}

@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSDate *messageDate; // @synthesize messageDate=_messageDate;
@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(copy, nonatomic) NSString *chatGUID; // @synthesize chatGUID=_chatGUID;
- (int)compare:(id)arg1;
- (id)initWithMessage:(id)arg1 chatGUID:(id)arg2;

@end

