//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitCommit;

@interface GTGitBlameAnnotationGroup : NSObject
{
    GTGitCommit *_commit;
    struct _NSRange _lineRange;
}

+ (id)blameAnnotationGroupWithCommit:(id)arg1 lineRange:(struct _NSRange)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct _NSRange lineRange; // @synthesize lineRange=_lineRange;
@property(retain, nonatomic) GTGitCommit *commit; // @synthesize commit=_commit;
@property(readonly, nonatomic) unsigned long long endingLine;
@property(readonly, nonatomic) unsigned long long startingLine;
- (id)initWithCommit:(id)arg1 lineRange:(struct _NSRange)arg2;
- (double)calculateHeightForLineHeights:(id)arg1;

@end

