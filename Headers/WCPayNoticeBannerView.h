//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface WCPayNoticeBannerView : UIView
{
    id <WCPayNoticeBannerViewDelegate> _m_delegate;
    UILabel *_m_titleLabel;
    NSString *_m_clickUrl;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *m_clickUrl; // @synthesize m_clickUrl=_m_clickUrl;
@property(nonatomic) __weak id <WCPayNoticeBannerViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
- (void)onTap:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateUrl:(id)arg1;

@end

