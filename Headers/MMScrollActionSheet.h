//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IUiUtilExt.h"
#import "MMScrollActionSheetIconViewDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMUILabel, NSArray, NSString, UIButton, UIPopoverController, UIViewController;

@interface MMScrollActionSheet : UIView <MMScrollActionSheetIconViewDelegate, IUiUtilExt, UIScrollViewDelegate, UIPopoverPresentationControllerDelegate>
{
    unsigned long long _rowCount;
    NSArray *_dataAry;
    NSString *_description;
    NSString *_cancelTitle;
    MMUILabel *_titleLabel;
    UIView *_containerView;
    UIView *_transparentView;
    UIButton *_cancelButton;
    UIPopoverController *_popoverController;
    UIViewController *_popoverControllerNew;
    NSArray *_bottomBtnDataAry;
    _Bool _isShowed;
    id <MMScrollActionSheetDelegate> _delegate;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <MMScrollActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissAnimated:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithItems:(id)arg1 desciption:(id)arg2 cancelButtonTitle:(id)arg3;
- (id)initWithItemsAndBtnDataAry:(id)arg1 desciption:(id)arg2 cancelButtonTitle:(id)arg3 bottomBtnDataAry:(id)arg4;
- (_Bool)isSupportVisualEffect;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (void)onCancelBtnClicked;
- (void)onCustomBtnClicked:(id)arg1;
- (void)onMainWindowFrameChanged;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)setupCancelButton;
- (void)setupContainerView;
- (void)setupScrollViews;
- (void)setupTitle;
- (void)setupTransparentView;
- (void)showInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
