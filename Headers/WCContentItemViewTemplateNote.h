//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "MMWebViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCCanvasPageViewControllerDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "WCImageViewDelegate.h"

@class MMImageGridView, NSString, UIImageView, UILabel;

@interface WCContentItemViewTemplateNote : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, WCImageViewDelegate, MMWebViewDelegate, UIGestureRecognizerDelegate, WCForceTouchPreviewProtocol>
{
    MMImageGridView *_imageGridView;
    UIImageView *_defaultImageView;
    UILabel *_titleLabel;
    UIImageView *_originIconView;
    UILabel *_descLabel;
    double _targetMargin;
    double _targetWidth;
}

+ (id)getTrimDesc:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
- (void)addFavorite;
- (_Bool)canPeek;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)onClickWCImage:(id)arg1;
- (void)onCloseCanvasPageView;
- (void)onFavoriteAdd:(id)arg1;
- (void)onLongTouch;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)setHighlightedColor;
- (void)setNonInteractive;
- (void)setNormalColor;
@property(nonatomic) double targetMargin; // @synthesize targetMargin=_targetMargin;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
- (void)throwUrlMessage;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
