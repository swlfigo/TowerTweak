//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GTGitCommit, GTHistoryCommitHeaderInfoGenerator, GTStateManager, NSCache, NSMutableArray;

@interface GTHistoryCommitHeaderInfoView : NSView
{
    GTGitCommit *_commit;
    long long _summaryType;
    GTStateManager *_viewState;
    NSMutableArray *_labelViews;
    NSMutableArray *_valueViews;
    NSCache *_cachedViews;
    GTHistoryCommitHeaderInfoGenerator *_commitHeaderInfoGenerator;
}

+ (struct CGSize)minimumSizeForCommit:(id)arg1 width:(double)arg2 summaryType:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) GTHistoryCommitHeaderInfoGenerator *commitHeaderInfoGenerator; // @synthesize commitHeaderInfoGenerator=_commitHeaderInfoGenerator;
@property(retain, nonatomic) NSCache *cachedViews; // @synthesize cachedViews=_cachedViews;
@property(retain, nonatomic) NSMutableArray *valueViews; // @synthesize valueViews=_valueViews;
@property(retain, nonatomic) NSMutableArray *labelViews; // @synthesize labelViews=_labelViews;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(nonatomic) long long summaryType; // @synthesize summaryType=_summaryType;
@property(retain, nonatomic) GTGitCommit *commit; // @synthesize commit=_commit;
- (id)makeValueViewWithItem:(id)arg1;
- (id)makeLabelViewWithItem:(id)arg1;
- (void)updateSummary;
- (BOOL)needsUpdateSummary;
- (void)updateViewState;
- (void)update;
- (void)layout;
- (void)updateConstraints;
- (void)awakeFromNib;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

