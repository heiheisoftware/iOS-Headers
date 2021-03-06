/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MPImageCache, NSArray, NSIndexPath, RUCreateStationViewController, RUParallelScrollView, RUProxyTableView, UIAlertView, _UIBackdropView;

@interface RUEditStationsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _UIBackdropView *_backdropView;
    RUParallelScrollView *_containerScrollView;
    RUCreateStationViewController *_createStationViewController;
    UIAlertView *_deletionAlertView;
    unsigned long long _ignoreReloadDataCount;
    MPImageCache *_imageCache;
    NSIndexPath *_indexPathToDelete;
    _Bool _isEditing;
    _Bool _needsReloadAfterEndIgnoring;
    NSArray *_stations;
    RUProxyTableView *_tableView;
    id <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateBarButtonItemsAnimated:(_Bool)arg1;
- (void)_endIgnoringReloadData;
- (void)_commitDeletingStationWithCompletionHandler:(id)arg1;
- (void)_beginIgnoringReloadData;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)reloadData;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)contentScrollView;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

