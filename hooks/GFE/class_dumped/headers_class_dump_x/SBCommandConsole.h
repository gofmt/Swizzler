/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SBCommandConsole : _ABAddressBookAddRecord
{
    id <SBCommandConsoleDelegate> delegate;
    NSMutableArray *_commands;
    NSMutableDictionary *_commandActions;
    NSArray *commandsHistory;
}

- (void)setCommandActions:(id)fp8;
- (id)commandActions;
- (void)setCommands:(id)fp8;
- (id)commands;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)evaluateString:(id)fp8;
- (id)commandsHistory;
- (void)addNewCommandAction:(id)fp8;
- (void)addNewCommandString:(id)fp8;
- (void)dealloc;
- (id)init;

@end

