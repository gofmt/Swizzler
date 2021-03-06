//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableView.h"

#import "GUSwipeTrackerDelegate.h"

@class GUSwipeTracker, KLGenericViewController, NSDate;

@interface KLDayView : UITableView <GUSwipeTrackerDelegate>
{
    GUSwipeTracker *swipeTracker;
    BOOL _shouldTrackSwipe;
    KLGenericViewController *controller;
    NSDate *lastTouchDateforSwipe;
}

@property(retain, nonatomic) NSDate *lastTouchDateforSwipe; // @synthesize lastTouchDateforSwipe;
- (void)dealloc;
- (void)wasSwipedRightInView:(id)arg1;
- (void)wasSwipedLeftInView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesBeganTimerExpired:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

