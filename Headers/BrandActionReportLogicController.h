//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class BrandServiceContinueLocationReportLogic, BrandServiceEnterConversationLogic, CContact;

@interface BrandActionReportLogicController : MMObject
{
    CContact *m_contact;
    BrandServiceEnterConversationLogic *m_enterConversationLogic;
    BrandServiceContinueLocationReportLogic *m_continueLocationReporter;
}

- (void).cxx_destruct;
- (void)creatContinueReportLogic;
- (void)createEnterReportLogic;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) BrandServiceContinueLocationReportLogic *m_continueLocationReporter; // @synthesize m_continueLocationReporter;
@property(retain, nonatomic) BrandServiceEnterConversationLogic *m_enterConversationLogic; // @synthesize m_enterConversationLogic;
- (void)resetContinueReportLogic;
- (void)updateContact:(id)arg1;

@end

