//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class NSArray, NSDictionary, NSOperationQueue, NSString, NSURL;

@interface GTGitExportRevisionAction : GTGitAction
{
    NSString *_revision;
    NSArray *_filePaths;
    NSURL *_destination;
    unsigned long long _options;
    NSDictionary *_contextInfo;
    NSOperationQueue *_queue;
    NSArray *_archivedFilePaths;
    NSURL *_intermediateDestinationURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *intermediateDestinationURL; // @synthesize intermediateDestinationURL=_intermediateDestinationURL;
@property(retain, nonatomic) NSArray *archivedFilePaths; // @synthesize archivedFilePaths=_archivedFilePaths;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSURL *destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (BOOL)actionShouldOverwriteExistingFileAtPath:(id)arg1;
- (void)actionDidFinishUnpackingArchive;
- (void)startMovingFilesIntoDestination;
- (void)startUnpackingArchive:(id)arg1;
- (void)actionDidFailArchivingRevisionWithError:(id)arg1;
- (void)actionDidFinishArchivingRevision:(id)arg1;
- (void)gitArchiveCommandDidFinish:(id)arg1;
- (void)startArchivingRevision;
- (BOOL)createsArchive;
- (void)main;

@end

