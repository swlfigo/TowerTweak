//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAutocompleteCellView.h"

@class GTAutocompleteItem, GTAvatarImageView, GTGitContributor, GTGitContributorFormatter, NSString;

@interface GTHistoryContributorAutocompleteCellView : GTAutocompleteCellView
{
    GTAvatarImageView *_avatarImageView;
    NSString *_contributorName;
    GTGitContributorFormatter *_formatter;
}

+ (double)height;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingContributor;
+ (id)keyPathsForValuesAffectingItem;
- (void).cxx_destruct;
@property(nonatomic) __weak GTGitContributorFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSString *contributorName; // @synthesize contributorName=_contributorName;
@property(nonatomic) __weak GTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)updateAvatarImageView;
- (void)setBackgroundStyle:(long long)arg1;
- (id)title;
@property(readonly, nonatomic) GTGitContributor *contributor;
@property(readonly, nonatomic) GTAutocompleteItem *item;
- (void)setObjectValue:(id)arg1;

@end

