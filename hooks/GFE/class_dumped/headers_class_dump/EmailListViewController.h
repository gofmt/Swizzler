//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "PullToReconnectTVC.h"

#import "EmailDataSourceCacheDelegate.h"
#import "EmailFilterSelectViewControllerDelegate.h"
#import "EmailListItemCellDelegate.h"
#import "EmailListMultiSelectToolbarDelegate.h"
#import "EmailVCDelegate.h"
#import "FilteredCacheDelegate.h"
#import "FolderListViewControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"

@class ConversationListItem, ConversationListTVC, EmailDataSourceCache, EmailListItem, EmailListMultiSelectToolbar, FilteredCache, GUBarButtonItem, GUNoPassthroughViewsPopoverController, GUProgressHUD, NSArray, NSDate, NSDictionary, NSIndexPath, NSString, NSTimer, StackedView, UIActivityIndicatorView, UIBarButtonItem, UIButton, UILabel, UINavigationItem, UINib, UITableView, UIView, UIViewController;

@interface EmailListViewController : PullToReconnectTVC <EmailDataSourceCacheDelegate, FilteredCacheDelegate, EmailFilterSelectViewControllerDelegate, UISearchBarDelegate, UISearchDisplayDelegate, EmailVCDelegate, UIPopoverControllerDelegate, FolderListViewControllerDelegate, EmailListItemCellDelegate, EmailListMultiSelectToolbarDelegate>
{
    UINib *_cellNib;
    UINavigationItem *_navigationItemCurrent;
    int _lastUnreadCount;
    StackedView *_stackOfViewsFooter;
    NSTimer *_subscribeTimer;
    BOOL _folderSubscribing;
    GUBarButtonItem *_folderButton;
    EmailListItem *_currentEmailListItem;
    GUNoPassthroughViewsPopoverController *_currentPopover;
    UIViewController *_currentModalVC;
    FilteredCache *_mainFilteredCache;
    FilteredCache *_searchFilteredCache;
    int _currentFilter;
    BOOL _searchEnabled;
    EmailListMultiSelectToolbar *_multiSelectToolbar;
    UITableView *_mainTableView;
    BOOL _folderSubscribed;
    BOOL _folderSubscribeCanChange;
    BOOL _performInitialSelectCell;
    BOOL _performInitialScroll;
    BOOL _isSwipeDelete;
    BOOL _shouldFixSectionHeaders;
    BOOL _emptyingTrashInProgress;
    UIView *_currentPopoverPresentingView;
    UIView *_headerView;
    UILabel *_sortLabel;
    UILabel *_sortKeyLabel;
    UIView *_loadingView;
    UILabel *_loadingViewCountLabel;
    UIView *_subscribeView;
    UILabel *_subscribeStatusLabel;
    UILabel *_subscribeDescriptionLabel;
    UIActivityIndicatorView *_subscribeSpinner;
    UIButton *_subscribeButton;
    UILabel *_subscribeToThisLabel;
    UILabel *_loadingViewMoreMessagesLabel;
    EmailDataSourceCache *_emailDataSourceCache;
    NSDate *_currentFilterDate;
    id <EmailListViewControllerDelegate> _delegate;
    GUBarButtonItem *_toggleEditModeBarItem;
    GUBarButtonItem *_composeBarItem;
    GUBarButtonItem *_selectAllBarItem;
    GUBarButtonItem *_cancelEditBarItem;
    UIView *_sortFilterView;
    id <FolderViewDataEmailSecurityInfoUpdate> _smimeEmailViewDisplay;
    int _recordIdSelectedToDelete;
    id <FilteredCacheFilter> _mainFilteredCacheFilter;
    int _previousDominoRecordNumber;
    ConversationListItem *inConversation;
    UIBarButtonItem *_savedLeftBarItem;
    NSArray *_savedRightBarItems;
    ConversationListTVC *conversationTVC;
    EmailListItem *_emailToView;
    UILabel *_noResultsMessageDisplayLabel;
    GUProgressHUD *_progressHUD;
    NSDictionary *_rowHeights;
    NSString *_currentSizeCategoryForRowHeights;
    float _cellHeightForCurrentSizeCategory;
    UIButton *_sortFilterButton;
    NSIndexPath *_currentDeleteEmailListItemPath;
}

@property(retain, nonatomic) NSIndexPath *currentDeleteEmailListItemPath; // @synthesize currentDeleteEmailListItemPath=_currentDeleteEmailListItemPath;
@property(retain, nonatomic) UIButton *sortFilterButton; // @synthesize sortFilterButton=_sortFilterButton;
@property(nonatomic) float cellHeightForCurrentSizeCategory; // @synthesize cellHeightForCurrentSizeCategory=_cellHeightForCurrentSizeCategory;
@property(copy, nonatomic) NSString *currentSizeCategoryForRowHeights; // @synthesize currentSizeCategoryForRowHeights=_currentSizeCategoryForRowHeights;
@property(retain, nonatomic) NSDictionary *rowHeights; // @synthesize rowHeights=_rowHeights;
@property(retain, nonatomic) GUProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property BOOL emptyingTrashInProgress; // @synthesize emptyingTrashInProgress=_emptyingTrashInProgress;
@property(retain, nonatomic) UILabel *noResultsMessageDisplayLabel; // @synthesize noResultsMessageDisplayLabel=_noResultsMessageDisplayLabel;
@property(nonatomic) BOOL shouldFixSectionHeaders; // @synthesize shouldFixSectionHeaders=_shouldFixSectionHeaders;
@property(retain, nonatomic) EmailListItem *emailToView; // @synthesize emailToView=_emailToView;
@property(nonatomic) ConversationListTVC *conversationTVC; // @synthesize conversationTVC;
@property(retain, nonatomic) NSArray *savedRightBarItems; // @synthesize savedRightBarItems=_savedRightBarItems;
@property(retain, nonatomic) UIBarButtonItem *savedLeftBarItem; // @synthesize savedLeftBarItem=_savedLeftBarItem;
@property(retain, nonatomic) ConversationListItem *inConversation; // @synthesize inConversation;
@property(nonatomic) int previousDominoRecordNumber; // @synthesize previousDominoRecordNumber=_previousDominoRecordNumber;
@property(retain, nonatomic) id <FilteredCacheFilter> mainFilteredCacheFilter; // @synthesize mainFilteredCacheFilter=_mainFilteredCacheFilter;
@property(nonatomic) BOOL isSwipeDelete; // @synthesize isSwipeDelete=_isSwipeDelete;
@property(nonatomic) int recordIdSelectedToDelete; // @synthesize recordIdSelectedToDelete=_recordIdSelectedToDelete;
@property(nonatomic) id <FolderViewDataEmailSecurityInfoUpdate> smimeEmailViewDisplay; // @synthesize smimeEmailViewDisplay=_smimeEmailViewDisplay;
@property(retain, nonatomic) UIView *sortFilterView; // @synthesize sortFilterView=_sortFilterView;
@property(retain, nonatomic) GUBarButtonItem *cancelEditBarItem; // @synthesize cancelEditBarItem=_cancelEditBarItem;
@property(retain, nonatomic) GUBarButtonItem *selectAllBarItem; // @synthesize selectAllBarItem=_selectAllBarItem;
@property(retain, nonatomic) GUBarButtonItem *composeBarItem; // @synthesize composeBarItem=_composeBarItem;
@property(retain, nonatomic) GUBarButtonItem *toggleEditModeBarItem; // @synthesize toggleEditModeBarItem=_toggleEditModeBarItem;
@property(retain, nonatomic) GUBarButtonItem *folderButton; // @synthesize folderButton=_folderButton;
@property(nonatomic) BOOL performInitialScroll; // @synthesize performInitialScroll=_performInitialScroll;
@property(nonatomic) id <EmailListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EmailListItem *currentEmailListItem; // @synthesize currentEmailListItem=_currentEmailListItem;
@property(nonatomic) BOOL performInitialSelectCell; // @synthesize performInitialSelectCell=_performInitialSelectCell;
@property(retain, nonatomic) NSDate *currentFilterDate; // @synthesize currentFilterDate=_currentFilterDate;
@property(retain, nonatomic) EmailListMultiSelectToolbar *multiSelectToolbar; // @synthesize multiSelectToolbar=_multiSelectToolbar;
@property(nonatomic) BOOL searchEnabled; // @synthesize searchEnabled=_searchEnabled;
@property(nonatomic) BOOL folderSubscribeCanChange; // @synthesize folderSubscribeCanChange=_folderSubscribeCanChange;
@property(nonatomic) BOOL folderSubscribed; // @synthesize folderSubscribed=_folderSubscribed;
@property(nonatomic) int currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) EmailDataSourceCache *emailDataSourceCache; // @synthesize emailDataSourceCache=_emailDataSourceCache;
@property(retain, nonatomic) FilteredCache *searchFilteredCache; // @synthesize searchFilteredCache=_searchFilteredCache;
@property(retain, nonatomic) FilteredCache *mainFilteredCache; // @synthesize mainFilteredCache=_mainFilteredCache;
@property(retain, nonatomic) UILabel *loadingViewMoreMessagesLabel; // @synthesize loadingViewMoreMessagesLabel=_loadingViewMoreMessagesLabel;
@property(retain, nonatomic) UILabel *subscribeToThisLabel; // @synthesize subscribeToThisLabel=_subscribeToThisLabel;
@property(retain, nonatomic) UIButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) UIActivityIndicatorView *subscribeSpinner; // @synthesize subscribeSpinner=_subscribeSpinner;
@property(retain, nonatomic) UILabel *subscribeDescriptionLabel; // @synthesize subscribeDescriptionLabel=_subscribeDescriptionLabel;
@property(retain, nonatomic) UILabel *subscribeStatusLabel; // @synthesize subscribeStatusLabel=_subscribeStatusLabel;
@property(retain, nonatomic) UIView *subscribeView; // @synthesize subscribeView=_subscribeView;
@property(retain, nonatomic) UILabel *loadingViewCountLabel; // @synthesize loadingViewCountLabel=_loadingViewCountLabel;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *sortKeyLabel; // @synthesize sortKeyLabel=_sortKeyLabel;
@property(retain, nonatomic) UILabel *sortLabel; // @synthesize sortLabel=_sortLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIViewController *currentModalVC; // @synthesize currentModalVC=_currentModalVC;
@property(retain, nonatomic) UIView *currentPopoverPresentingView; // @synthesize currentPopoverPresentingView=_currentPopoverPresentingView;
@property(retain, nonatomic) GUNoPassthroughViewsPopoverController *currentPopover; // @synthesize currentPopover=_currentPopover;
- (void)updateCellHeightForCurrentContentSizeCategory:(id)arg1;
- (void)updateTableViewRowHeight;
- (void)disableNativeEditMode;
- (id)truncateString:(id)arg1 ToSize:(struct CGSize)arg2 withFont:(id)arg3;
- (BOOL)isOlderEventEmail:(unsigned short)arg1 appointmentExists:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)folderListViewComplete:(id)arg1;
- (void)anotherFolderSelected:(int)arg1 moveItems:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (unsigned int)emailCountForCurrentFilterInConversation:(id)arg1;
- (BOOL)canHighlightCell;
- (void)willDeleteEmailListItem:(id)arg1;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (float)searchBarHeightForPullToRefresh;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(int)arg2;
- (BOOL)isEmailFilterSelectViewControllerInConversation:(id)arg1;
- (void)emailFilterSelectViewController:(id)arg1 didSelectFilterType:(int)arg2 withLabel:(id)arg3;
- (void)didClearMainCacheForEmailDataSourceCache:(id)arg1;
- (void)didMultiMarkEmailsForEmailDataSourceCache:(id)arg1;
- (void)didFinishEmptyingTrashForEmailDataSourceCache:(id)arg1;
- (void)didTriggerEmptyTrashForEmailDataSourceCache:(id)arg1;
- (void)didMultiDeleteEmailsForEmailDataSourceCache:(id)arg1;
- (void)didChangeTimezoneForEmailDataSourceCache:(id)arg1;
- (void)outboxEmailStatusUpdatedForEmailDataSourceCache:(id)arg1;
- (void)emailDataSourceCache:(id)arg1 didReceiveSecurityInfoUpdateForRecNum:(int)arg2;
- (void)emailDataSourceCache:(id)arg1 didChangeLoadingState:(int)arg2;
- (void)willUpdateFilteredCache:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)filteredCache:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 didRemoveRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 willRemoveRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 didAddRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 didRemoveSectionsAtIndexes:(id)arg2;
- (void)filteredCache:(id)arg1 didAddSectionsAtIndexes:(id)arg2;
- (void)fixMultipleSectionHeaderViews;
- (BOOL)shouldAllowAnimationsForTableView;
- (void)freezeScrollForTableView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)indexPathToFreezeForTableView:(id)arg1;
- (void)subscribeToCurrentFolder:(id)arg1;
- (void)updateSubscriptionStage:(id)arg1;
- (void)presentFolderChoice:(id)arg1;
- (void)toggleEditMode:(id)arg1;
- (void)toggleSelectAll:(id)arg1;
- (void)composeMail:(id)arg1;
- (id)createMainFilteredCache;
- (int)logicalIndexOfCachedObjectInConversation:(id)arg1;
- (int)logicalIndexOfCachedObject:(id)arg1;
- (int)totalEmailsInCurrentCachedFilteredView;
- (void)reloadFolderAfterResync;
- (void)presentFolderChoiceFromView:(id)arg1 forMovingObjects:(id)arg2;
- (void)updateNavigationBarTitleForOrientation:(int)arg1;
- (void)toolbarReplaceItemWithCorrectDeleteButton;
- (void)updateMultiSelectToolBar;
- (void)multiSelectToolbar:(id)arg1 actionForBarButtonItem:(id)arg2 event:(id)arg3;
- (void)combineSearchBar:(id)arg1;
- (void)updateSearchScopeButtonTitles;
@property(readonly, nonatomic) FilteredCache *activeFilteredCache;
@property(readonly, nonatomic) UITableView *activeTableView;
- (id)tableViewForFilteredCache:(id)arg1;
- (id)filteredCacheForTableView:(id)arg1;
- (void)setupTableView:(id)arg1;
- (void)clearDeleteButton;
- (void)showDraftComposeWithRecordNumber:(int)arg1;
- (void)delayedShowDetailViewForEmailListItem:(id)arg1;
- (void)showDetailViewForEmailListItem:(id)arg1;
- (void)selectCellForEmailAdjacentToEmailListItem:(id)arg1 isBefore:(BOOL)arg2;
- (id)emailListItemAdjacentToEmailListItem:(id)arg1 isBefore:(BOOL)arg2;
- (BOOL)tableView:(id)arg1 selectCellForCurrentSelectedEmailAnimated:(BOOL)arg2 reloadDetailView:(BOOL)arg3;
- (void)selectFirstCell;
- (void)dismissCurrentModalVC;
- (void)dismissCurrentPopover;
- (void)dismissPresentedViews:(id)arg1;
- (void)handleMajorEventNotifications:(id)arg1;
- (id)setupNavigationItem;
- (void)setupRightButton:(id)arg1;
- (id)tableView;
- (id)originalNavigationItem;
- (void)updateAllControlsAfterDelay;
- (void)updateAllControls;
- (void)removeFromTableFooter:(id)arg1;
- (void)addToTableFooter:(id)arg1;
- (void)updateSubscribeView;
- (int)subscribeStage;
- (int)appCoreDictionaryStageForFolder:(int)arg1;
- (void)updateLoadingView;
- (void)updateComposeBarItem;
- (void)updateToggleEditModeBarItem;
- (void)updateCancelEditBarItem;
- (void)updateSelectAllBarItem;
- (BOOL)allEmailsSelected;
- (id)shortTitleStringForOrientation:(int)arg1;
- (id)accessibilityStringForBackButton;
- (void)updateListTitleForOrientation:(int)arg1;
- (id)currentFolderName;
- (void)setupDefaultFolder;
- (void)updateListTitle;
- (int)unreadCountForCurrentFolder;
- (void)scrollToInitialPosition;
- (float)scrollHeightAvailable;
- (BOOL)isTableHeaderShowingForTable:(id)arg1;
- (void)handleForegroundNotification:(id)arg1;
- (void)handleSignificantTimeChange:(id)arg1;
- (void)updateSortLabelForFilterSortPreset:(int)arg1;
- (void)saveFilterSortPreset:(int)arg1 forFolder:(int)arg2;
- (int)loadFilterSortPresetForFolder:(int)arg1;
- (id)emailListItemCellForTableView:(id)arg1;
- (void)multiselectTransitionFinished;
- (void)animationDidFinishForMultiSelectModeTransition:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setMultiSelectMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)reloadTable;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (void)toggleNoResultsMessageForFilteredCache:(id)arg1;
- (void)adjustNoResultsLabelInTableView:(id)arg1 hasSection:(BOOL)arg2;
- (void)updateFolderSubscribed;
- (void)emptyTrash;
- (void)deleteMultiselectedEmailItems;
- (void)deleteEmailItems:(id)arg1;
- (void)flagMultiselectedEmailsWithFlag:(int)arg1;
- (void)flagCurrentEmailWithFlag:(int)arg1;
- (void)markMultiselectedEmailsWithReadStatus:(BOOL)arg1;
- (void)markCurrentEmailWithReadStatus:(BOOL)arg1;
- (void)scrollToCurrentEmailIfNotVisible:(BOOL)arg1;
- (void)selectPreviousEmail;
- (void)selectNextEmail;
- (BOOL)canMoveDownOnTheList;
- (BOOL)canMoveUpOnTheList;
- (int)totalEmailsInCurrentFilteredView;
- (int)totalUnreadEmailsInCurrentFilteredView;
- (int)totalEmailsInCurrentFolder;
- (int)totalEmails;
- (int)logicalIndexOfObject:(id)arg1;
- (void)moveEmailsWithRecordNumbers:(id)arg1 toFolder:(int)arg2;
- (void)deleteEmailsWithRecordNumbers:(id)arg1;
- (void)presentNextEmailIfConversation:(int)arg1;
- (void)changeFolder:(int)arg1;
- (void)showSortOptions:(id)arg1;
- (id)navigationItem;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)updateSearchBarTextInEmailListViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)handleSwipeDelete:(id)arg1;
- (void)completeInitialization;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)originalInitWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithEmailListViewControllerDelegate:(id)arg1;
- (void)dealloc;
- (id)getDefaultAutomationScreenName;

@end

