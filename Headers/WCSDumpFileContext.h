//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCSDumpFileContext : NSObject
{
    unsigned int maxFileSize;
    unsigned int maxFileCount;
    NSString *fileName;
    NSString *fileUUID;
    NSString *dstFilePath;
    NSString *context;
    unsigned long long imageBaseAddr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *context; // @synthesize context;
@property(retain, nonatomic) NSString *dstFilePath; // @synthesize dstFilePath;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
@property(retain, nonatomic) NSString *fileUUID; // @synthesize fileUUID;
@property(nonatomic) unsigned long long imageBaseAddr; // @synthesize imageBaseAddr;
@property(nonatomic) unsigned int maxFileCount; // @synthesize maxFileCount;
@property(nonatomic) unsigned int maxFileSize; // @synthesize maxFileSize;

@end

