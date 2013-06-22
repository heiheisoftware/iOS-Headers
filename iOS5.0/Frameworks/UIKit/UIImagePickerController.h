/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UINavigationController.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSMutableDictionary, UIView;

@interface UIImagePickerController : UINavigationController <NSCoding>
{
    unsigned int _sourceType;
    id _image;
    struct CGRect _cropRect;
    NSArray *_mediaTypes;
    NSMutableDictionary *_properties;
    int _previousStatusBarStyle;
    struct {
        unsigned int visible:1;
        unsigned int isCleaningUp:1;
        unsigned int savingOptions:3;
        unsigned int didRevertStatusBar:1;
    } _imagePickerFlags;
}

+ (BOOL)isFlashAvailableForCameraDevice:(unsigned int)arg1;
+ (id)availableCaptureModesForCameraDevice:(unsigned int)arg1;
+ (BOOL)isCameraDeviceAvailable:(unsigned int)arg1;
+ (id)availableMediaTypesForSourceType:(unsigned int)arg1;
+ (BOOL)_reviewCapturedItems;
+ (BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(unsigned int)arg2;
+ (BOOL)isSourceTypeAvailable:(unsigned int)arg1;
- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (void)_imagePickerDidCancel;
- (void)_autoDismiss;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_setupControllersForCurrentSourceType;
- (id)_createInitialController;
- (void)_removeAllChildren;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_didRevertStatusBar;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillUnload;
@property(nonatomic) int cameraFlashMode;
@property(nonatomic) unsigned int cameraCaptureMode;
- (BOOL)_isCameraCaptureModeValid:(unsigned int)arg1;
@property(nonatomic) unsigned int cameraDevice;
- (void)stopVideoCapture;
- (BOOL)startVideoCapture;
- (void)takePicture;
@property(nonatomic) struct CGAffineTransform cameraViewTransform;
@property(retain, nonatomic) UIView *cameraOverlayView;
@property(nonatomic) BOOL showsCameraControls;
- (id)_cameraViewController;
- (BOOL)_sourceTypeIsCamera;
- (unsigned int)_imagePickerSavingOptions;
- (void)_setImagePickerSavingOptions:(unsigned int)arg1;
- (id)_valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_properties;
- (void)_initializeProperties;
- (void)_setProperties:(id)arg1;
- (BOOL)_allowsImageEditing;
- (void)_setAllowsImageEditing:(BOOL)arg1;
@property(nonatomic) unsigned int videoQuality;
@property(nonatomic) double videoMaximumDuration;
@property(nonatomic) BOOL allowsEditing;
@property(nonatomic) BOOL allowsImageEditing;
- (void)_setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)_allowsMultipleSelection;
@property(copy, nonatomic) NSArray *mediaTypes;
@property(nonatomic) unsigned int sourceType;
- (void)_updateCameraCaptureMode;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)dealloc;
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) id <UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; // @dynamic delegate;

@end
