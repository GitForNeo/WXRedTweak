//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameCenterBaseMsg.h"

@class GameCenterMsgBubbleInfo, GameCenterMsgMessageCenterInfo, GameCenterMsgReportInfo, GameCenterMsgTimeInfo, NSString;

@interface GameCenterCommMsg : GameCenterBaseMsg
{
    NSString *_appId;
    GameCenterMsgBubbleInfo *_bubbleInfo;
    GameCenterMsgTimeInfo *_timeInfo;
    GameCenterMsgMessageCenterInfo *_msgCenterInfo;
    GameCenterMsgReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)appid;
@property(retain, nonatomic) GameCenterMsgBubbleInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
- (unsigned int)createTime;
- (id)getMsgCenterContent;
- (int)getMsgReportType;
- (id)getNoticeid;
- (id)getNotifyContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)isExpired;
@property(retain, nonatomic) GameCenterMsgMessageCenterInfo *msgCenterInfo; // @synthesize msgCenterInfo=_msgCenterInfo;
- (_Bool)notInMsgCenter;
- (id)parseBubbleInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseContentPic:(struct XmlReaderNode_t *)arg1;
- (id)parseEntranceInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseFloatLayerInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgCardInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgCenterInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgSecondLineInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgSender:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgSourceInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseReportInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseTimeInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseUserInfoList:(struct XmlReaderNode_t *)arg1;
- (id)parseWePkgPreloadInfo:(struct XmlReaderNode_t *)arg1;
@property(retain, nonatomic) GameCenterMsgReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) GameCenterMsgTimeInfo *timeInfo; // @synthesize timeInfo=_timeInfo;

@end

