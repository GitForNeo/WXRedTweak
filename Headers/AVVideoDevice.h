//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSMutableArray, NSRecursiveLock, NSString, UIImage;

@interface AVVideoDevice : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    struct opaqueCMSampleBuffer *m_lastSampleBufferRef;
    _Bool _shouldCaptureImage;
    _Bool _shouldStopAfterCapturing;
    UIImage *_lastCaptureImage;
    _Bool _m_usingBackCamera;
    _Bool _m_hasSetupSession;
    int videoDevErrCode;
    int videoErrCnt;
    int _mVideoInterruptEndFlag;
    AVCaptureSession *session;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoDataOutput;
    id <AVVideoDeviceDelegate> delegate;
    id <AVVideoDataSource> dataSource;
    NSRecursiveLock *m_startSessionLock;
    id <AVVideoDeviceSessionDelegate> m_sessionDelegate;
    char *mCameraBuf;
    id <AVVideoDataSource> mRecDevCallBack;
    id <AVVideoDeviceSetupSessionDelegate> m_setupDelegate;
    NSMutableArray *_m_requestLayerBlocks;
    AVCaptureVideoPreviewLayer *_m_previewLayer;
    NSRecursiveLock *_m_lastCaptureImageLock;
}

- (void).cxx_destruct;
- (void)answerLayerRequest;
- (id)backFacingCamera;
- (unsigned long long)cameraCount;
- (id)cameraWithPosition:(long long)arg1;
- (void)captureOneImage;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(nonatomic) __weak id <AVVideoDataSource> dataSource; // @synthesize dataSource;
- (void)dealloc;
@property __weak id <AVVideoDeviceDelegate> delegate; // @synthesize delegate;
- (id)frontFacingCamera;
- (int)getCaptureFps;
- (id)init;
- (void)initPreviewLayer:(struct CGRect)arg1;
- (_Bool)isCameraFront;
- (_Bool)isRunning;
@property(nonatomic) char *mCameraBuf; // @synthesize mCameraBuf;
@property(nonatomic) __weak id <AVVideoDataSource> mRecDevCallBack; // @synthesize mRecDevCallBack;
@property(nonatomic) int mVideoInterruptEndFlag; // @synthesize mVideoInterruptEndFlag=_mVideoInterruptEndFlag;
@property(nonatomic) _Bool m_hasSetupSession; // @synthesize m_hasSetupSession=_m_hasSetupSession;
@property(retain, nonatomic) NSRecursiveLock *m_lastCaptureImageLock; // @synthesize m_lastCaptureImageLock=_m_lastCaptureImageLock;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *m_previewLayer; // @synthesize m_previewLayer=_m_previewLayer;
@property(retain, nonatomic) NSMutableArray *m_requestLayerBlocks; // @synthesize m_requestLayerBlocks=_m_requestLayerBlocks;
@property(nonatomic) __weak id <AVVideoDeviceSessionDelegate> m_sessionDelegate; // @synthesize m_sessionDelegate;
@property(nonatomic) __weak id <AVVideoDeviceSetupSessionDelegate> m_setupDelegate; // @synthesize m_setupDelegate;
@property(retain, nonatomic) NSRecursiveLock *m_startSessionLock; // @synthesize m_startSessionLock;
@property(nonatomic) _Bool m_usingBackCamera; // @synthesize m_usingBackCamera=_m_usingBackCamera;
- (void)newVideoSample:(struct opaqueCMSampleBuffer *)arg1;
- (void)onVideoError:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (id)previewLayer:(struct CGRect)arg1;
- (id)requestLastCapture;
- (void)requestLayer:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session;
- (void)setFlashModeOff;
- (void)setFlashModeOn;
- (void)setFrameDuration;
- (void)setTorchModeOff;
- (void)setTorchModeOn;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput;
@property(nonatomic) int videoDevErrCode; // @synthesize videoDevErrCode;
- (void)setVideoDeviceSessionDelegate:(id)arg1;
- (void)setVideoDeviceSetupDelegate:(id)arg1;
@property(nonatomic) int videoErrCnt; // @synthesize videoErrCnt;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput;
- (_Bool)setupSessionWithCameraFront:(_Bool)arg1;
- (void)startSession;
- (void)stopSession;
- (void)toggleCamera;
- (void)updateLastSampleBufferRef:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

