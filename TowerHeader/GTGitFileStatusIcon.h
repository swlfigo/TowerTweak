//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface GTGitFileStatusIcon : NSView
{
    BOOL _highlighted;
    unsigned long long _gitFileStatus;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long gitFileStatus; // @synthesize gitFileStatus=_gitFileStatus;
- (void)drawRect:(struct CGRect)arg1;

@end

