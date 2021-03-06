//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UILabel, UIView;

@interface WCNewStorageFreeSpaceViewCell : MMUIView
{
    UILabel *titleLabel;
    UILabel *usedSpaceLabel;
    UILabel *wordingLabel;
    UIButton *actionButton;
    UIView *seperateLine;
    UIView *_extraView;
    id <IWCNewStorageFreeSpaceViewCellExt> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton;
@property(nonatomic) __weak id <IWCNewStorageFreeSpaceViewCellExt> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *extraView; // @synthesize extraView=_extraView;
- (void)initActionButton;
- (void)initExtraView;
- (void)initTitleLabel;
- (void)initUsedSpaceLabel;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initWordingLabel;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UILabel *usedSpaceLabel; // @synthesize usedSpaceLabel;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel;

@end

