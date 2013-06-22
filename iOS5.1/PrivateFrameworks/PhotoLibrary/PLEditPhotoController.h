/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLImageAdjustmentViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CIFilter, NSArray, NSDictionary, NSMutableArray, NSTimer, NSUndoManager, PLImageAdjustmentView, PLManagedAsset, UIActionSheet, UIAlertView, UIImage, UILabel, UINavigationBar, UIPopoverController, UIProgressHUD, UIScrollView, UIToolbar, UIView;

@interface PLEditPhotoController : UIViewController <PLImageAdjustmentViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate>
{
    UIScrollView *_scrollView;
    UIView *_zoomView;
    PLImageAdjustmentView *_editView;
    UILabel *_messageView;
    UINavigationBar *_navigationBar;
    UIToolbar *_toolbar;
    UIProgressHUD *_savingHUD;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    UIPopoverController *_popover;
    int _initialOrientation;
    NSDictionary *_initialAdjustmentState;
    NSUndoManager *_undoManager;
    NSDictionary *_previousAdjustmentState;
    NSUndoManager *_previousUndoManager;
    NSTimer *_messageTimer;
    NSMutableArray *_navBarItems;
    NSArray *_originalItems;
    PLManagedAsset *_editedPhoto;
    PLManagedAsset *_pendingPhoto;
    UIImage *_adjustedImage;
    NSArray *_autoAdjustmentFilters;
    struct CGRect _enhanceCalcRect;
    NSArray *_autoRedEyeCorrections;
    CIFilter *_autoRedEyeFilter;
    CIFilter *_redEyeFilter;
    struct CGRect _normalizedCropRect;
    float _straightenAngle;
    float _rotationAngle;
    NSDictionary *_cachedMetadata;
    UIImage *_scaledCachedImage;
    struct dispatch_queue_s *_cachedImageQueue;
    id _didEndZoomingBlock;
    id _editCompletionBlock;
    id _actionCompletionBlock;
    unsigned int _redEyeCycleCount;
    unsigned int _didInitializeNavigationItem:1;
    unsigned int _toolbarWasHidden:1;
    unsigned int _isUserAction:1;
    unsigned int _isCroppingImage:1;
    unsigned int _didTapForRedEyeCorrection:1;
    unsigned int _isCanceling:1;
    unsigned int _isOrderedOut:1;
    unsigned int _autoAdjustmentEnabled:1;
    unsigned int _preloadingEnhancementFilters:1;
    unsigned int _applyingAutoEnhance:1;
    unsigned int _modal:1;
    unsigned int _isUsingProxyImage:1;
    unsigned int _shouldPublishToPhotoStreams:1;
    int _currentMode;
}

+ (void)initialize;
@property(copy, nonatomic) id actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
@property(nonatomic) float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
- (BOOL)isEditing;
- (void)setMinimumZoom:(float)arg1 maximumZoom:(float)arg2;
- (BOOL)savesAdjustmentsToCameraRoll;
- (struct CGSize)editedImageSize;
- (void)_setUndoManager:(id)arg1;
- (void)updatePendingPhoto;
@property(readonly, nonatomic) PLManagedAsset *pendingPhoto;
@property(retain, nonatomic) PLManagedAsset *editedPhoto;
- (void)_setEditedPhoto:(id)arg1 resetFilters:(BOOL)arg2;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(retain, nonatomic) UIToolbar *toolbar;
@property(retain, nonatomic) UINavigationBar *navigationBar;
- (BOOL)_currentStateIsEqualToAdjustmentState:(id)arg1;
- (id)_originalState;
- (id)_adjustmentState;
- (void)_setAdjustmentState:(id)arg1;
- (void)_cleanupFilters;
- (void)_loadFiltersFromDatabase;
- (void)_saveFiltersToAsset:(id)arg1;
- (void)_displayRedEyeCorrections:(id)arg1;
- (void)_displayAllRedEyeCorrections;
- (BOOL)hasRedEyeCorrections;
- (id)redEyePoints;
- (BOOL)_setRedEyeCorrections:(id)arg1 changedCorrections:(id *)arg2;
- (void)_removeRedEyeCorrections:(id)arg1;
- (BOOL)removeRedEyePoint:(struct CGPoint)arg1;
- (void)_addRedEyeCorrections:(id)arg1 fromFilter:(id)arg2 isUserAction:(BOOL)arg3;
- (void)addRedEyePoint:(struct CGPoint)arg1;
- (id)_newCIImageFromUIImage:(id)arg1;
- (void)_setAspectRatio:(struct CGSize)arg1;
- (void)_rotatePhotoByAngle:(float)arg1;
- (void)_autoAdjustImage;
- (void)_preloadEnhancementFilters;
@property(nonatomic) BOOL autoAdjustmentEnabled;
- (void)_setAutoAdjustmentFilters:(id)arg1;
- (id)_autoAdjustmentFilters;
- (void)_setAutoRedEyeFilterFromArray:(id)arg1;
- (id)_calculateAutoFiltersWithFeatures:(int)arg1 includeGeometry:(BOOL)arg2;
- (void)setStraightenAngle:(float)arg1 normalizedCropRect:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGRect normalizedCropRect;
@property(readonly, nonatomic) float straightenAngle;
- (id)_masterImagePath;
- (void)saveAdjustments;
- (void)_saveAdjustmentsToOriginal;
- (void)_saveXMPPropertiesToPhoto:(id)arg1;
- (void)_writeXMPSidecarToPhoto:(id)arg1 properties:(id)arg2 orientation:(int)arg3;
- (BOOL)_writeXMPHeaderToPhoto:(id)arg1 properties:(id)arg2 orientation:(int)arg3;
- (void)_saveAdjustmentsToCopy;
- (id)newAdjustedImageWithoutGeometry;
- (id)_croppedStraightenedImage;
- (id)_cropAndStraightenFilters;
- (id)_newImageFromImage:(id)arg1 filters:(id)arg2 orientation:(int)arg3;
- (id)_scaledCachedImage;
- (id)_scaledCachedImageFromData:(id)arg1 utiType:(id)arg2 imageSize:(struct CGSize)arg3 scaledToMaxDimension:(unsigned int)arg4 outImageProperties:(id *)arg5;
- (id)_currentNonGeometryFilters;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (void)didRedoNotification:(id)arg1;
- (void)didUndoNotification:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)willPresentAlertView:(id)arg1;
- (BOOL)_dismissPopoverViews;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_undoTransformImage:(struct CGRect)arg1 angle:(float)arg2;
- (void)editViewDidTouchImage:(id)arg1 location:(struct CGPoint)arg2;
- (void)editViewDidCropImage:(id)arg1;
- (void)editViewWillCropImage:(id)arg1;
- (void)_updateToolbar;
- (void)_updateModeButtons;
- (void)_updateEditedImage:(BOOL)arg1;
- (void)_setEditedImage:(id)arg1 isProxyImage:(BOOL)arg2 updateCropAndStraighten:(BOOL)arg3;
- (void)_updateEnhanceButton;
- (void)_updateButtons;
- (void)_updateControls;
- (void)_dismissSavingHUD;
- (void)_presentSavingHUD;
- (void)_setControlsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)orderOut:(BOOL)arg1;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (void)applySubmode:(id)arg1;
- (void)showConstraints:(id)arg1;
- (void)selectEditMode:(id)arg1;
- (void)rotatePhoto:(id)arg1;
- (void)enhancePhoto:(id)arg1;
- (void)undo:(id)arg1;
- (void)revertToSaved:(id)arg1;
- (void)revertToOriginal:(id)arg1;
- (void)_pushNewUndoManager;
- (void)_popModalState;
- (void)_pushModalState;
- (void)_setEditMode:(int)arg1;
- (void)_dismissProgressAlertIfNeeded;
- (void)_verifyProgress:(id)arg1 completion:(id)arg2;
- (void)_updateMessageOverlayFrame;
- (void)hideMessage:(id)arg1;
- (void)showMessage:(id)arg1 duration:(double)arg2;
- (void)_displayAutoAdjustmentMessage;
- (id)_constrainActionSheet;
- (id)_buttonWithTag:(int)arg1;
- (id)_rightButtonForMode:(int)arg1 enableDone:(BOOL)arg2 enableSave:(BOOL)arg3;
- (id)_newButtonItemWithIcon:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 tag:(int)arg5;
- (id)_cropAndStraightenToolbarItems;
- (id)_redEyeLabel;
- (id)_startToolbarItems;
- (id)_currentToolbarItems;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (id)navigationItem;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)_updateCropInsetsForOrientation:(int)arg1;
- (BOOL)hidesBottomBarWhenPushed;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_isZoomedToScale:(float)arg1;
- (void)zoomToScale:(float)arg1 completionBlock:(id)arg2;
- (float)rotatedZoomToFitScale;
- (float)zoomToFitScale;
- (void)sizeToFit:(BOOL)arg1;
- (void)_startEditingWithAsset:(id)arg1;
- (void)startEditingAsset:(id)arg1 proxyImage:(id)arg2 completion:(id)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
