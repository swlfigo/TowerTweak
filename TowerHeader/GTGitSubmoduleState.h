//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString, NSURL;

@interface GTGitSubmoduleState : NSObject
{
    BOOL _dirty;
    NSManagedObjectID *_submoduleID;
    NSString *_path;
    NSURL *_absoluteFileURL;
    long long _status;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSURL *absoluteFileURL; // @synthesize absoluteFileURL=_absoluteFileURL;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSManagedObjectID *submoduleID; // @synthesize submoduleID=_submoduleID;
- (id)description;

@end

