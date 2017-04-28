/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>

//#import "BrowserPanelViewController.h"

//#import "BookmarkTextEntryTableViewControllerDelegate-Protocol.h"
//#import "FolderPickerViewControllerDelegate-Protocol.h"
//#import "UITableViewDataSource-Protocol.h"
//#import "UITableViewDelegate-Protocol.h"

//@class BookmarkTextEntryTableViewCell, UITableView, UITableViewCell, WebBookmark, WebBookmarkCollection;

@interface BookmarkInfoViewController : NSObject //BrowserPanelViewController <FolderPickerViewControllerDelegate, BookmarkTextEntryTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
//    WebBookmarkCollection *_collection;
//    WebBookmark *_bookmark;
//    WebBookmark *_parentBookmark;
//    BOOL _addingBookmark;
//    UITableView *_table;
//    BookmarkTextEntryTableViewCell *_titleCell;
//    BookmarkTextEntryTableViewCell *_addressCell;
//    UITableViewCell *_folderCell;
//    int _editingField;
//    BOOL _didSelectFolder;
}

- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3;
- (void)_save;
- (void)_cancel;
- (void)_popFromKeyboardReturn;
- (void)_titleDidEndEditing;
- (void)_addressDidEndEditing;
- (void)_createCellsIfNeeded;
- (void)loadView;
- (void)viewDidUnload;
- (BOOL)shouldShowButtonBar;
- (void)layoutViews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_bookmarksDidReload;
- (id)bookmark;
- (BOOL)titleCellHasText;
- (void)_updateParentFolderCell;
- (void)_updateCellValues;
- (void)setBookmark:(id)arg1;
- (void)setParent:(id)arg1;
- (void)saveChanges;
- (BOOL)canSaveChanges;
- (void)_editField:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_showFolderPicker;
- (BOOL)isEditingField;
- (void)_valuesChanged;
- (void)folderPicker:(id)arg1 pickedFolder:(id)arg2;
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)dealloc;
- (struct CGSize)contentSizeForViewInPopoverView;

@end
