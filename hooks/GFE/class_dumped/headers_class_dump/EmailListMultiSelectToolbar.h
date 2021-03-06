//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIToolbar.h"

@class UIBarButtonItem, UILabel;

@interface EmailListMultiSelectToolbar : UIToolbar
{
    BOOL _IS_IOS7;
    BOOL _updateNeeded;
    int _stateOfToolbar;
    unsigned int _numberOfSelectedEmails;
    UIBarButtonItem *_multiMarkBarButton;
    UIBarButtonItem *_multiMoveBarButton;
    UIBarButtonItem *_multiDeleteBarButton;
    UIBarButtonItem *_multiEmptyTrashBarButton;
    UILabel *_multiMarkLabel;
    UILabel *_multiMoveLabel;
    UILabel *_multiDeleteLabel;
    UILabel *_multiEmptyTrashLabel;
}

@property(readonly, nonatomic) UILabel *multiEmptyTrashLabel; // @synthesize multiEmptyTrashLabel=_multiEmptyTrashLabel;
@property(readonly, nonatomic) UILabel *multiDeleteLabel; // @synthesize multiDeleteLabel=_multiDeleteLabel;
@property(readonly, nonatomic) UILabel *multiMoveLabel; // @synthesize multiMoveLabel=_multiMoveLabel;
@property(readonly, nonatomic) UILabel *multiMarkLabel; // @synthesize multiMarkLabel=_multiMarkLabel;
@property(readonly, nonatomic) UIBarButtonItem *multiEmptyTrashBarButton; // @synthesize multiEmptyTrashBarButton=_multiEmptyTrashBarButton;
@property(readonly, nonatomic) UIBarButtonItem *multiDeleteBarButton; // @synthesize multiDeleteBarButton=_multiDeleteBarButton;
@property(readonly, nonatomic) UIBarButtonItem *multiMoveBarButton; // @synthesize multiMoveBarButton=_multiMoveBarButton;
@property(readonly, nonatomic) UIBarButtonItem *multiMarkBarButton; // @synthesize multiMarkBarButton=_multiMarkBarButton;
@property(nonatomic) unsigned int numberOfSelectedEmails; // @synthesize numberOfSelectedEmails=_numberOfSelectedEmails;
@property(nonatomic) int stateOfToolbar; // @synthesize stateOfToolbar=_stateOfToolbar;
- (id)multiSelectLabelWithFrame:(struct CGRect)arg1 text:(id)arg2;
- (id)multiSelectButtonWithFrame:(struct CGRect)arg1 imageNamed:(id)arg2 highlightedImageNamed:(id)arg3;
- (id)multiDeleteBarButtonTitleWithFolderId:(int)arg1;
- (void)setupView;
- (void)barButtonItemAction:(id)arg1 event:(id)arg2;
- (void)barButtonItemAction:(id)arg1;
- (void)updateToolbarWithFolderId:(int)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <EmailListMultiSelectToolbarDelegate> delegate;

@end

