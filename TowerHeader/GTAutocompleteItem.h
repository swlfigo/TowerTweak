//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTAutocompleteItem : NSObject
{
    long long _type;
    NSString *_title;
    NSString *_suggestion;
    id _source;
    id _representedObject;
    NSString *_identifier;
}

+ (id)suggestionItemWithTitle:(id)arg1 suggestion:(id)arg2;
+ (id)suggestionItemWithSuggestion:(id)arg1;
+ (id)loadingItem;
+ (id)separatorItem;
+ (id)infoItemWithTitle:(id)arg1;
+ (id)groupItemWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak id source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isSuggestionItem) BOOL suggestionItem;
@property(readonly, nonatomic, getter=isGroupItem) BOOL groupItem;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

