/*****************************************************************************
 * TrackSynchronization.h: MacOS X interface module
 *****************************************************************************
 * Copyright (C) 2011-2012 VLC authors and VideoLAN
 * Copyright (C) 2011-2015 Felix Paul Kühne
 * $Id: 4cb32e4bbad8ce66dcd054c53c9006a6fe557f11 $
 *
 * Authors: Felix Paul Kühne <fkuehne -at- videolan -dot- org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

@interface VLCTrackSynchronization : NSWindowController

/* generic */
@property (readwrite, weak) IBOutlet NSButton *resetButton;

/* Audio / Video */
@property (readwrite, weak) IBOutlet NSTextField *avLabel;
@property (readwrite, weak) IBOutlet NSTextField *av_advanceLabel;
@property (readwrite, weak) IBOutlet NSTextField *av_advanceTextField;
@property (readwrite, weak) IBOutlet NSStepper *avStepper;

/* Subtitles / Video */
@property (readwrite, weak) IBOutlet NSTextField *svLabel;
@property (readwrite, weak) IBOutlet NSTextField *sv_advanceLabel;
@property (readwrite, weak) IBOutlet NSTextField *sv_advanceTextField;
@property (readwrite, weak) IBOutlet NSStepper *sv_advanceStepper;
@property (readwrite, weak) IBOutlet NSTextField *sv_speedLabel;
@property (readwrite, weak) IBOutlet NSTextField *sv_speedTextField;
@property (readwrite, weak) IBOutlet NSStepper *sv_speedStepper;
@property (readwrite, weak) IBOutlet NSTextField *sv_durLabel;
@property (readwrite, weak) IBOutlet NSTextField *sv_durTextField;
@property (readwrite, weak) IBOutlet NSStepper *sv_durStepper;


- (void)updateCocoaWindowLevel:(NSInteger)i_level;
- (IBAction)toggleWindow:(id)sender;
- (IBAction)resetValues:(id)sender;
- (void)updateValues;

- (IBAction)avValueChanged:(id)sender;

- (IBAction)svAdvanceValueChanged:(id)sender;
- (IBAction)svSpeedValueChanged:(id)sender;
- (IBAction)svDurationValueChanged:(id)sender;
@end
