/*****************************************************************************
 * VLCHUDRadiobuttonCell.h: Custom radiobutton cell UI for dark HUD Panels
 *****************************************************************************
 * Copyright (C) 2016 VLC authors and VideoLAN
 * $Id: 4f1d4d0b7a773fce2027113c3609df569c50396c $
 *
 * Authors: Marvin Scholz <epirat07 -at- gmail -dot- com>
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

@interface VLCHUDRadiobuttonCell : NSButtonCell

@property NSGradient *normalGradient;
@property NSGradient *highlightGradient;
@property NSGradient *pushedGradient;
@property NSColor    *textColor;

@end
