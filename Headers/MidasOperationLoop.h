//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasIAPPayOperationDelegate.h"

@class MidasIAPReprovideOperation, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface MidasOperationLoop : NSObject <MidasIAPPayOperationDelegate>
{
    NSMutableDictionary *_operations;
    NSMutableArray *_sortOperations;
    id <MidasIAPOperationProtocol> _runningOp;
    MidasIAPReprovideOperation *_reprovideOp;
}

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)checkRunning;
- (id)init;
- (void)onOperationFinished:(id)arg1;
@property(readonly, nonatomic) NSDictionary *operations; // @synthesize operations=_operations;
- (void)reset;
- (void)syncAddOperations:(id)arg1;
- (void)syncRemoveOperations:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

