//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class MMScrollView;

@interface WCPayGPIntroViewController : WCPayBaseViewController
{
    id <WCPayGPIntroViewControllerDelegate> _delegate;
    MMScrollView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
@property(nonatomic) __weak id <WCPayGPIntroViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)historyBtnClick;
- (void)launchBtnClick;
- (void)leftBarButtonClick;
- (void)setupContentView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

@end
