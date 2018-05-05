//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMAppAttachFileMgr : MMService <ICdnComMgrExt, PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_msgWrapDict;
    NSMutableDictionary *_msgAttachUrlDict;
}

+ (void)reportFileMsg:(id)arg1 action:(int)arg2;
@property(retain, nonatomic) NSMutableDictionary *msgAttachUrlDict; // @synthesize msgAttachUrlDict=_msgAttachUrlDict;
@property(retain, nonatomic) NSMutableDictionary *msgWrapDict; // @synthesize msgWrapDict=_msgWrapDict;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetCheckBigFileDownloadRespnse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCheckBigFileUploadRespnse:(id)arg1 eventID:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)checkDownload:(id)arg1;
- (void)checkUploadInternal:(id)arg1 scene:(unsigned int)arg2;
- (void)calcMessageWrapFileMd5:(id)arg1 scene:(unsigned int)arg2 filePath:(id)arg3;
- (void)checkUpload:(id)arg1 scene:(unsigned int)arg2;
- (void)checkIfFileExistInSvr:(id)arg1;
- (_Bool)isLargeFileMessage:(id)arg1;
- (unsigned long long)getShareChatRoomMemberMaxCount;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
