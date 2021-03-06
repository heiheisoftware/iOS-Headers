//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TSTIntegerKeyDict, TSTTableDataObjectKeyDict;

__attribute__((visibility("hidden")))
@interface TSTTableDataList : TSPObject
{
    int mListType;
    unsigned int mNextID;
    TSTIntegerKeyDict *mData;
    TSTTableDataObjectKeyDict *mIDs;
}

+ (id)newObjectForUnarchiver:(id)arg1;
@property(readonly, nonatomic) unsigned int nextID; // @synthesize nextID=mNextID;
@property(readonly, nonatomic) TSTIntegerKeyDict *data;
- (void)enumerateCustomFormatsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCustomFormatObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)allRichTextPayloadStorages;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (unsigned long)flushableSize;
- (void)dealloc;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (void)p_setupWithType:(int)arg1 nextKeyID:(unsigned int)arg2;
- (BOOL)supportsIDMapForType:(int)arg1;
- (void)p_customFormatList_setNextID:(unsigned int)arg1;

@end

