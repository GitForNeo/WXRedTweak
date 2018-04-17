//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface PreloadVideoRecord : NSObject <PBCoding>
{
    NSString *m_nsTempPath;
    unsigned int m_uiAccessTime;
    NSString *m_nsChatName;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) NSString *m_nsTempPath; // @synthesize m_nsTempPath;
@property(nonatomic) unsigned int m_uiAccessTime; // @synthesize m_uiAccessTime;
- (id)pathForTempVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
