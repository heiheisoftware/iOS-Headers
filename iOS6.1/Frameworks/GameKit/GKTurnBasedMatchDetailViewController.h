/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableViewControllerV2.h>

@class GKSectionArrayDataSource, GKTurnBasedMatch, GKTurnBasedParticipant, NSIndexPath, NSMutableDictionary;

@interface GKTurnBasedMatchDetailViewController : GKTableViewControllerV2
{
    id <GKTurnBasedMatchDetailViewControllerDelegate> _delegate;
    GKTurnBasedMatch *_match;
    NSMutableDictionary *_players;
    GKSectionArrayDataSource *_matchDetailDataSource;
    int _matchStyle;
    GKTurnBasedParticipant *_showcaseParticipant;
    NSIndexPath *_parentIndexPath;
}

@property(retain, nonatomic) NSIndexPath *parentIndexPath; // @synthesize parentIndexPath=_parentIndexPath;
@property(retain, nonatomic) GKTurnBasedParticipant *showcaseParticipant; // @synthesize showcaseParticipant=_showcaseParticipant;
@property(nonatomic) int matchStyle; // @synthesize matchStyle=_matchStyle;
@property(retain, nonatomic) GKSectionArrayDataSource *matchDetailDataSource; // @synthesize matchDetailDataSource=_matchDetailDataSource;
@property(retain, nonatomic) NSMutableDictionary *players; // @synthesize players=_players;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) id <GKTurnBasedMatchDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeMatch;
- (void)quitMatch;
- (void)chooseMatch;
- (void)declineInvitation;
- (void)acceptInvitation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)prepareDataSource;
- (id)buttonSectionWithTitles:(id)arg1 actions:(id)arg2;
- (id)finishedTitle;
- (id)activeTitle;
- (id)invitationTitle;
- (BOOL)usesCrossfade;
- (void)dealloc;
- (id)init;

@end
