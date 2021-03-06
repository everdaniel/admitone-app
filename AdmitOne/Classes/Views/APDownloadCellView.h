//
//  APDownloadCellView.h
//  AdmitOne
//
//  Created by Anthony Plourde on 12-01-09.
//  Copyright (c) 2012 Anthony Plourde.
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <AppKit/AppKit.h>

@interface APDownloadCellView : NSTableCellView {
@private
    IBOutlet NSButton *revealButton;
    IBOutlet NSButton *actionButton;
    IBOutlet NSProgressIndicator *progressBar;
    IBOutlet NSTextField *detailField;
    IBOutlet NSTextField *statusField;
}

@property(nonatomic, retain) NSButton *revealButton;
@property(nonatomic, retain) NSButton *actionButton;
@property(nonatomic, retain) NSProgressIndicator *progressBar;
@property(nonatomic, retain) NSTextField *detailField;
@property(nonatomic, retain) NSTextField *statusField;

@end
