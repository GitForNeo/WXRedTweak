//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewInfo.h"

@class NSArray;

@interface ChatroomProfileView : MMTableViewInfo
{
    NSArray *m_arrContacts;
}

- (void).cxx_destruct;
- (unsigned long long)getMemberViewColumnCount;
- (void)initMemberView;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListSection:(id)arg1;
- (void)updateContactList:(id)arg1;

@end
