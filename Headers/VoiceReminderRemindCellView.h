//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "IAudioReceiverExt.h"

@class UIButton, VoiceReminderRemindViewModel;

@interface VoiceReminderRemindCellView : CommonMessageCellView <IAudioReceiverExt>
{
    UIButton *m_playButton;
    long long m_playCount;
    _Bool m_playing;
}

- (void).cxx_destruct;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)dealloc;
- (void)downloadAppData;
- (void)initView;
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (void)onPlayButtonClicked:(id)arg1;
- (id)operationMenuItems;
- (void)startPlayVoice;
- (void)stopPlayVoice;

// Remaining properties
@property(readonly, nonatomic) VoiceReminderRemindViewModel *viewModel; // @dynamic viewModel;

@end

