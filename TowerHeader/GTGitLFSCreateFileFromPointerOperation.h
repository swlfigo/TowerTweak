//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class GTGitLFSPointer, NSString;
@protocol FNGitCommandCancelling;

@interface GTGitLFSCreateFileFromPointerOperation : GTGitRepositoryOperation
{
    GTGitLFSPointer *_pointer;
    NSString *_outputPath;
    id <FNGitCommandCancelling> _command;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FNGitCommandCancelling> command; // @synthesize command=_command;
@property(retain, nonatomic) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(retain, nonatomic) GTGitLFSPointer *pointer; // @synthesize pointer=_pointer;
- (void)cancel;
- (void)execute;
- (id)groups;

@end
