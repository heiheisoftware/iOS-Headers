//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKMessage.h"

@class CKConversation, CKEntity, IMMessage, IMService, NSArray, NSAttributedString, NSDate, NSError, NSString;

@interface CKIMMessage : NSObject <CKMessage>
{
    NSDate *_date;
    CKConversation *_conversation;
    IMMessage *_imMessage;
    NSArray *_parts;
    int _partCount;
    float _cachedPercentComplete;
    struct {
        unsigned int hasPostedComplete:1;
        unsigned int shouldPlayReceivedTone:1;
        unsigned int isPlaceHolderDate:1;
    } _messageFlags;
}

@property(nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) BOOL shouldUseSeparateSubject;
@property(readonly, nonatomic) BOOL shouldPlayReceivedTone;
@property(readonly, nonatomic) BOOL wantsSendStatus;
- (id)url;
@property(readonly, nonatomic) BOOL outgoingBubbleColor;
@property(readonly, nonatomic) IMService *service;
@property(readonly, nonatomic) BOOL isSMS;
@property(readonly, nonatomic) BOOL isiMessage;
- (BOOL)postMessageReceivedIfNecessary;
- (void)updateMessageCompleteQuietly;
@property(retain, nonatomic) IMMessage *IMMessage;
@property(readonly, nonatomic) long long sequenceNumber;
@property(readonly, nonatomic) int rowID;
@property(readonly, nonatomic) NSString *guid;
@property(readonly, nonatomic) BOOL isTypingIndicator;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(nonatomic) BOOL isFromDowngrading;
- (id)description;
- (void)deleteMessageParts:(id)arg1;
- (void)resetParts;
- (void)loadParts;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) NSArray *parts;
- (id)messagePartAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int messagePartCount;
@property(readonly, nonatomic) NSString *previewText;
- (id)attachmentText:(BOOL)arg1;
- (id)_rawPreviewText;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL supportsDeliveryReceipts;
- (id)timeDelivered;
@property(readonly, nonatomic) BOOL isDelivered;
@property(readonly, nonatomic) BOOL isFromFilteredSender;
@property(readonly, nonatomic) BOOL isWaitingForDelivery;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, nonatomic) int failedSendCount;
@property(readonly, nonatomic) int pendingCount;
- (BOOL)pending;
@property(readonly, nonatomic) int sentCount;
@property(readonly, nonatomic) BOOL partiallyFailedSend;
@property(readonly, nonatomic) BOOL failedSend;
- (void)markAsRead;
@property(readonly, nonatomic) BOOL isToEmailAddress;
@property(readonly, nonatomic) BOOL isOutgoing;
@property(readonly, nonatomic) NSDate *timeRead;
@property(readonly, nonatomic) BOOL isRead;
@property(readonly, nonatomic) BOOL hasBeenSent;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSAttributedString *subject;
@property(readonly, nonatomic) CKEntity *sender;
@property(readonly, nonatomic) NSString *address;
- (int)messageCount;
@property(readonly, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) float percentComplete;
- (int)totalMessageCount;
- (void)_loadCounts;
- (void)_parseIMMessagePartsWithTextProcessingBlock:(CDUnknownBlockType)arg1 fileTransferProcessingBlock:(CDUnknownBlockType)arg2;
- (void)_resetData;
- (void)dealloc;
- (id)initPlaceholderWithDate:(id)arg1;
- (id)initWithIMMessage:(id)arg1;

@end

