//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableSet, NSString;

@interface FriendListMgr : MMService <PBMessageObserverDelegate, MMService>
{
    NSMutableSet *m_downliadingPackageLists;
}

- (void).cxx_destruct;
- (id)LoadFriendListArchive:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SaveFriendListArchive:(id)arg1 packageListArchive:(id)arg2;
- (void)clearFriendListForType:(int)arg1;
- (void)dealloc;
- (_Bool)downloadFriendListForType:(int)arg1 InScene:(int)arg2;
- (id)getFriendListForType:(int)arg1;
- (id)getFriendListPath:(id)arg1;
- (id)init;
- (void)onFriendListSynced:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

