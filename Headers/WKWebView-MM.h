//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKWebView.h"

@class NSString;

@interface WKWebView (MM)
+ (_Bool)enableWKProxy:(long long)arg1;
+ (_Bool)hasLocalValidWePkg:(id)arg1;
+ (id)webViewWithType:(long long)arg1 frame:(struct CGRect)arg2 recordInitUrl:(id)arg3 delegate:(id)arg4;
@property(nonatomic) _Bool bWkProxyEnabled;
@property(nonatomic) _Bool isOfflinePage;
@property(retain, nonatomic) NSString *recordInitUrl;
- (void)tryDestroyWebView;
- (void)tryUpdateWePkgByLoadingUrl:(id)arg1 isMainFrame:(_Bool)arg2;
@end
