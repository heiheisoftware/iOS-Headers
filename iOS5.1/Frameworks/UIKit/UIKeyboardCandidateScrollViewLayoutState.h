/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface UIKeyboardCandidateScrollViewLayoutState : NSObject
{
    NSMutableArray *_allCells;
    NSMutableArray *_candidateCells;
    NSArray *_groupHeaderCells;
    NSArray *_candidateGroups;
    float _totalWidth;
    unsigned int _columnCount;
    float _columnWidth;
    float _rowHeight;
    BOOL _grouped;
    float _groupBarWidth;
    id _completion;
    BOOL _layoutFinished;
    unsigned int _currentGroupIndex;
    unsigned int _currentCandidateIndex;
    unsigned int _currentRowIndex;
    struct CGPoint _startPosition;
    float _previousGroupMaxY;
    float _groupHeight;
}

@property(nonatomic) float groupHeight; // @synthesize groupHeight=_groupHeight;
@property(nonatomic) float previousGroupMaxY; // @synthesize previousGroupMaxY=_previousGroupMaxY;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) unsigned int currentRowIndex; // @synthesize currentRowIndex=_currentRowIndex;
@property(nonatomic) unsigned int currentCandidateIndex; // @synthesize currentCandidateIndex=_currentCandidateIndex;
@property(nonatomic) unsigned int currentGroupIndex; // @synthesize currentGroupIndex=_currentGroupIndex;
@property(nonatomic) BOOL layoutFinished; // @synthesize layoutFinished=_layoutFinished;
@property(copy, nonatomic) id completion; // @synthesize completion=_completion;
@property(nonatomic) float groupBarWidth; // @synthesize groupBarWidth=_groupBarWidth;
@property(nonatomic) BOOL grouped; // @synthesize grouped=_grouped;
@property(nonatomic) float rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) float columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) unsigned int columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) float totalWidth; // @synthesize totalWidth=_totalWidth;
@property(retain, nonatomic) NSArray *candidateGroups; // @synthesize candidateGroups=_candidateGroups;
@property(retain, nonatomic) NSArray *groupHeaderCells; // @synthesize groupHeaderCells=_groupHeaderCells;
@property(retain, nonatomic) NSMutableArray *candidateCells; // @synthesize candidateCells=_candidateCells;
@property(retain, nonatomic) NSMutableArray *allCells; // @synthesize allCells=_allCells;
- (void)dealloc;

@end

