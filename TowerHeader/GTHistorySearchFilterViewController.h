//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTAutocompleteWindowControllerDelegate-Protocol.h"
#import "GTHistorySearchFilterItemControllerDelegate-Protocol.h"
#import "GTSearchObserving-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class GTAutocompleteWindowController, GTHistorySearchFilterItem, GTHistorySearchFilterItemController, GTHistorySearchFilterView, GTSearchObserver, GTSearchScopeConfiguration, GTStateManager, NSArray, NSDate, NSDatePicker, NSPopUpButton, NSSegmentedControl, NSString, NSTextField, NSTimer, NSView;
@protocol GTHistorySearchFilterViewControllerDelegate;

@interface GTHistorySearchFilterViewController : GTViewController <NSTextFieldDelegate, GTAutocompleteWindowControllerDelegate, GTSearchObserving, GTHistorySearchFilterItemControllerDelegate>
{
    BOOL _filterPopUpButtonEnabled;
    id <GTHistorySearchFilterViewControllerDelegate> _delegate;
    GTSearchScopeConfiguration *_searchScopeConfiguration;
    NSArray *_searchTokens;
    GTHistorySearchFilterItemController *_itemController;
    NSTextField *_textField;
    NSDatePicker *_datePicker;
    NSDatePicker *_endDatePicker;
    NSPopUpButton *_dateTypePopUpButton;
    NSPopUpButton *_filterTypePopUpButton;
    NSSegmentedControl *_addRemoveControl;
    NSView *_dateViewContainer;
    NSView *_inputViewContainer;
    NSArray *_textFieldConstraints;
    NSArray *_datePickerConstraints;
    GTHistorySearchFilterItem *_selectedFilterItem;
    NSArray *_selectedDateFilters;
    NSString *_searchText;
    NSString *_searchEndDateText;
    NSDate *_searchDate;
    NSDate *_searchEndDate;
    GTStateManager *_viewState;
    GTAutocompleteWindowController *_autocompleteWindowController;
    GTSearchObserver *_searchObserver;
    NSTimer *_searchDelayTimer;
    unsigned long long _selectedDateFilterIndex;
}

+ (id)keyPathsForValuesAffectingDisplaysDateRange;
+ (id)keyPathsForValuesAffectingSelectedFilterItem;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedDateFilterIndex; // @synthesize selectedDateFilterIndex=_selectedDateFilterIndex;
@property(nonatomic, getter=isFilterPopUpButtonEnabled) BOOL filterPopUpButtonEnabled; // @synthesize filterPopUpButtonEnabled=_filterPopUpButtonEnabled;
@property(retain, nonatomic) NSTimer *searchDelayTimer; // @synthesize searchDelayTimer=_searchDelayTimer;
@property(retain, nonatomic) GTSearchObserver *searchObserver; // @synthesize searchObserver=_searchObserver;
@property(retain, nonatomic) GTAutocompleteWindowController *autocompleteWindowController; // @synthesize autocompleteWindowController=_autocompleteWindowController;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) NSDate *searchEndDate; // @synthesize searchEndDate=_searchEndDate;
@property(retain, nonatomic) NSDate *searchDate; // @synthesize searchDate=_searchDate;
@property(retain, nonatomic) NSString *searchEndDateText; // @synthesize searchEndDateText=_searchEndDateText;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSArray *selectedDateFilters; // @synthesize selectedDateFilters=_selectedDateFilters;
@property(retain, nonatomic) GTHistorySearchFilterItem *selectedFilterItem; // @synthesize selectedFilterItem=_selectedFilterItem;
@property(retain, nonatomic) NSArray *datePickerConstraints; // @synthesize datePickerConstraints=_datePickerConstraints;
@property(retain, nonatomic) NSArray *textFieldConstraints; // @synthesize textFieldConstraints=_textFieldConstraints;
@property(retain, nonatomic) NSView *inputViewContainer; // @synthesize inputViewContainer=_inputViewContainer;
@property(retain, nonatomic) NSView *dateViewContainer; // @synthesize dateViewContainer=_dateViewContainer;
@property(retain, nonatomic) NSSegmentedControl *addRemoveControl; // @synthesize addRemoveControl=_addRemoveControl;
@property(retain, nonatomic) NSPopUpButton *filterTypePopUpButton; // @synthesize filterTypePopUpButton=_filterTypePopUpButton;
@property(retain, nonatomic) NSPopUpButton *dateTypePopUpButton; // @synthesize dateTypePopUpButton=_dateTypePopUpButton;
@property(retain, nonatomic) NSDatePicker *endDatePicker; // @synthesize endDatePicker=_endDatePicker;
@property(retain, nonatomic) NSDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) GTHistorySearchFilterItemController *itemController; // @synthesize itemController=_itemController;
@property(copy, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
@property(nonatomic) __weak GTSearchScopeConfiguration *searchScopeConfiguration; // @synthesize searchScopeConfiguration=_searchScopeConfiguration;
@property(nonatomic) __weak id <GTHistorySearchFilterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)stringRepresentationForRemoteState;
- (id)stringRepresentationForLocalState;
- (BOOL)shouldDisplayDateFilter;
- (void)reloadItemController;
- (void)displayTextField;
- (void)displayDatePicker;
- (void)historySearchFilterItemControllerDidReload:(id)arg1;
- (void)searchManagerDidUpdateSearchTokens:(id)arg1;
- (void)autocompleteControllerDidEnd;
- (void)autocompleteControllerDidAcceptItem:(id)arg1;
- (void)autocompleteControllerDidSelectItem:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)updateSearchTokensForDateFilter;
- (void)updateLocalStateWithSearchTokens;
- (void)updateSearchTokensAndPropertiesWithRemoteState;
- (void)updateSearchTokensWithLocalState;
- (void)saveSearchWithTransaction:(id)arg1;
- (void)saveCurrentSearch;
- (BOOL)wantsSearchToken:(id)arg1;
- (BOOL)hasSearchToken:(id)arg1;
- (void)historySearchFilterAddAndRemoveButtonClicked:(id)arg1;
- (void)historySearchFilterDateChanged:(id)arg1;
- (void)historySearchFilterDateTypeChanged:(id)arg1;
- (void)historySearchFilterSelectionChanged:(id)arg1;
- (void)updateEnabledState;
- (void)updateDateTypePopUpButton;
- (void)updateInputView;
- (BOOL)needsUpdateEnabledState;
- (BOOL)needsUpdateDateTypePopUpButton;
- (BOOL)needsUpdateInputView;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)prepareForUpdate;
- (void)update;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)configureLocalState;
- (void)configureDefaultDate;
- (void)configure;
- (id)availableFilters;
@property(readonly, nonatomic) BOOL displaysDateRange;
@property(readonly, nonatomic) NSDate *defaultDate;
@property(readonly, nonatomic) GTHistorySearchFilterView *filterView;
- (id)filters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
