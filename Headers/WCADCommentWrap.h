//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCADCommentWrap : NSObject
{
    unsigned int _startPositionType;
    unsigned int _endPositionType;
    unsigned int _commentCount;
    unsigned int _source;
    NSString *_adID;
    NSString *_publishID;
    NSString *_uxInfo;
    unsigned long long _startTime;
    unsigned long long _endTime;
    double _tableContentY;
    NSString *_snsStatExt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned int endPositionType; // @synthesize endPositionType=_endPositionType;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID=_publishID;
@property(retain, nonatomic) NSString *snsStatExt; // @synthesize snsStatExt=_snsStatExt;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned int startPositionType; // @synthesize startPositionType=_startPositionType;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double tableContentY; // @synthesize tableContentY=_tableContentY;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;

@end

