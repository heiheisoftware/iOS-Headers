//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView, _UIButtonMaskAnimationView;

@interface UIButton : UIControl <NSCoding>
{
    unsigned int _externalFlatEdge;
    struct __CFDictionary *_contentLookup;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    UIImageView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleView;
    BOOL _initialized;
    unsigned int _lastDrawingControlState;
    UITapGestureRecognizer *_selectGestureRecognizer;
    struct {
        unsigned int reversesTitleShadowWhenHighlighted:1;
        unsigned int adjustsImageWhenHighlighted:1;
        unsigned int adjustsImageWhenDisabled:1;
        unsigned int autosizeToFit:1;
        unsigned int disabledDimsImage:1;
        unsigned int showsTouchWhenHighlighted:1;
        unsigned int buttonType:8;
        unsigned int shouldHandleScrollerMouseEvent:1;
        unsigned int titleFrozen:1;
    } _buttonFlags;
    _UIButtonMaskAnimationView *_maskAnimationView;
    UIView *_selectionView;
    UIFont *_lazyTitleViewFont;
    NSArray *_contentConstraints;
    struct UIEdgeInsets _internalTitlePaddingInsets;
}

+ (id)_defaultImageColorForState:(unsigned int)arg1 button:(id)arg2;
+ (id)_defaultTitleColorForState:(unsigned int)arg1 button:(id)arg2;
+ (id)_defaultBackgroundImageForType:(int)arg1 andState:(unsigned int)arg2;
+ (id)_defaultImageForType:(int)arg1 andState:(unsigned int)arg2;
+ (id)_xImage;
+ (id)_minusImage;
+ (id)_checkmarkImage;
+ (id)_questionMarkImage;
+ (id)_exclamationMarkImage;
+ (id)_plusImage;
+ (id)_infoDarkImage;
+ (id)_infoLightImage;
+ (id)_detailDisclosureImage;
+ (id)_selectedIndicatorImage;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 baseAlpha:(float)arg4;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultNormalTitleColor;
+ (id)buttonWithType:(int)arg1;
@property(nonatomic, setter=_setInternalTitlePaddingInsets:) struct UIEdgeInsets _internalTitlePaddingInsets; // @synthesize _internalTitlePaddingInsets;
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // @synthesize _contentConstraints;
- (id)_letterpressStyleForState:(unsigned int)arg1;
- (id)_attributedTitleForState:(unsigned int)arg1;
- (id)_shadowColorForState:(unsigned int)arg1;
- (id)_imageColorForState:(unsigned int)arg1;
- (id)_titleColorForState:(unsigned int)arg1;
- (id)_titleForState:(unsigned int)arg1;
- (id)_backgroundForState:(unsigned int)arg1 usesBackgroundForNormalState:(char *)arg2;
- (id)_imageForState:(unsigned int)arg1 usesImageForNormalState:(char *)arg2;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (id)_archivableContent:(id *)arg1;
- (id)_contentForState:(unsigned int)arg1;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setContent:(id)arg1 forState:(unsigned int)arg2;
- (void)_updateEffectsForImageView:(id)arg1 background:(BOOL)arg2;
- (BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1;
- (float)_drawingStrokeForState:(unsigned int)arg1;
- (void)_setDrawingStroke:(float)arg1 forState:(unsigned int)arg2;
- (int)_drawingStyleForState:(unsigned int)arg1;
- (void)_setDrawingStyle:(int)arg1 forState:(unsigned int)arg2;
- (int)_drawingStyleForStroke:(float)arg1;
- (float)_drawingStrokeForStyle:(int)arg1;
- (struct CGRect)_highlightBounds;
- (id)image;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)_titleView;
- (id)_imageView;
- (id)_backgroundView;
- (void)_setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)_titleShadowOffset;
- (void)_setLineBreakMode:(int)arg1;
- (int)_lineBreakMode;
- (void)_setFont:(id)arg1;
- (id)_font;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned int)arg2;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (struct CGPoint)pressFeedbackPosition;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (BOOL)autosizesToFit;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_titleAttributesChanged;
- (int)_buttonType;
- (void)_setButtonType:(int)arg1;
- (void)_setupTitleView;
- (void)_setupTitleViewRequestingLayout:(BOOL)arg1;
- (id)_newLabelWithFrame:(struct CGRect)arg1;
- (void)_setupImageView;
- (id)_createPreparedImageViewWithFrame:(struct CGRect)arg1;
- (id)_setupBackgroundView;
- (id)_newImageViewWithFrame:(struct CGRect)arg1;
- (void)setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)titleShadowOffset;
- (void)setLineBreakMode:(int)arg1;
- (int)lineBreakMode;
- (void)setFont:(id)arg1;
- (id)font;
- (void)layoutSubviews;
- (void)_layoutTitleView;
- (void)_updateTitleView;
- (void)_layoutImageView;
- (void)_updateImageView;
- (void)_layoutBackgroundImageView;
- (void)_updateBackgroundImageView;
- (BOOL)_shouldUpdatePressedness;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)viewForBaselineLayout;
- (void)updateConstraints;
- (id)_titleOrImageViewForBaselineLayout;
- (void)_setContentHuggingPriorities:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)_titleRectForContentRect:(struct CGRect)arg1 calculatePositionForEmptyTitle:(BOOL)arg2;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property(readonly, nonatomic) UIImage *currentBackgroundImage;
@property(readonly, nonatomic) UIImage *currentImage;
@property(readonly, nonatomic) UIColor *currentTitleShadowColor;
@property(readonly, nonatomic) UIColor *_currentImageColor;
@property(readonly, nonatomic) UIColor *currentTitleColor;
@property(readonly, nonatomic) NSString *currentTitle;
- (id)attributedTitleForState:(unsigned int)arg1;
- (id)backgroundImageForState:(unsigned int)arg1;
- (id)imageForState:(unsigned int)arg1;
- (id)titleShadowColorForState:(unsigned int)arg1;
- (id)titleColorForState:(unsigned int)arg1;
- (id)titleForState:(unsigned int)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)_clippedHighlightBounds;
- (struct CGRect)_highlightRectForImageRect:(struct CGRect)arg1;
- (struct CGRect)_highlightRectForTextRect:(struct CGRect)arg1;
- (void)_setTitleFrozen:(BOOL)arg1;
- (BOOL)_isTitleFrozen;
- (void)_beginTitleAnimation;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (BOOL)_hasDrawingStyle;
- (float)_borderWidthForState:(unsigned int)arg1 bounds:(struct CGRect)arg2;
- (id)_borderColorForState:(unsigned int)arg1;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
@property(setter=_setExternalFlatEdge:) unsigned int _externalFlatEdge;
- (id)_externalImageColorForState:(unsigned int)arg1;
- (id)_externalBorderColorForState:(unsigned int)arg1;
- (id)_externalTitleColorForState:(unsigned int)arg1;
- (int)_externalDrawingStyleForState:(unsigned int)arg1;
- (void)_willMoveToWindow:(id)arg1;
- (void)_setupDrawingStyleForState:(unsigned int)arg1;
- (struct CGRect)_highlightBoundsForDrawingStyle;
- (void)_prepareMaskAnimationViewIfNecessary;
- (struct CGRect)_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (float)_selectedIndicatorAlpha;
- (void)_updateSelectionViewForState:(unsigned int)arg1;
- (BOOL)_imageNeedsCompositingModeWhenSelected;
- (BOOL)_textNeedsCompositingModeWhenSelected;
- (void)_setupPressednessForState:(unsigned int)arg1;
- (void)_updateMaskState;
- (BOOL)_hasHighlightColor;
- (float)_highlightCornerRadius;
- (struct UIEdgeInsets)_outsetInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (void)tintColorDidChange;
- (void)_selectGestureChanged:(id)arg1;
- (void)_uninstallSelectGestureRecognizer;
- (void)_installSelectGestureRecognizer;
- (void)_focusStateDidChange;
- (BOOL)_isFocusableElement;
- (BOOL)_isExternalRoundedRectButtonWithPressednessState;
- (BOOL)_isExternalRoundedRectButton;
- (BOOL)_isModernButton;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setContentHorizontalAlignment:(int)arg1;
@property(readonly, nonatomic) UIImageView *imageView;
@property(readonly, nonatomic) UILabel *titleLabel;
- (BOOL)_likelyToHaveTitle;
- (BOOL)_canHaveTitle;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @dynamic imageEdgeInsets;
@property(nonatomic) BOOL showsTouchWhenHighlighted;
@property(nonatomic) BOOL adjustsImageWhenDisabled; // @dynamic adjustsImageWhenDisabled;
@property(nonatomic) BOOL adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
@property(nonatomic) BOOL reversesTitleShadowWhenHighlighted; // @dynamic reversesTitleShadowWhenHighlighted;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @dynamic titleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @dynamic contentEdgeInsets;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_applyAppropriateChargeForButtonType;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(BOOL)arg2;
@property(readonly, nonatomic) int buttonType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)_invalidateContentConstraints;
- (struct UIEdgeInsets)_combinedContentPaddingInsets;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (id)_scriptingInfo;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isAccessibilityElementByDefault;

@end

