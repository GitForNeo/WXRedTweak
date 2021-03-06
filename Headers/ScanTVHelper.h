//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface ScanTVHelper : MMObject <PBMessageObserverDelegate>
{
    NSString *m_nsTVID;
    unsigned int m_uiTVDetailScene;
    id <ScanTVDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)GetTVItemByID:(id)arg1 Scene:(unsigned int)arg2;
- (void)GetTVItemFromSVR;
- (void)HandleGetTVItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)StopGet;
- (void)dealloc;
@property(nonatomic) __weak id <ScanTVDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsTVID; // @synthesize m_nsTVID;

@end

