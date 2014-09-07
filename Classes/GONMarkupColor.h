//
//  GONMarkupColor.h
//  GONMarkupParserSample
//
//  Created by Nicolas Goutaland on 25/06/14.
//  Copyright (c) 2014 Nicolas Goutaland All rights reserved.
//
//  Define a generic markup to add color
//  You can specify color value with "value" attribute.
//  Colors are handled via NSString+Color, using "representedColor" category method
//
// Examples
//
// <color value="red">text</>
// <color value="#FFEEAA">text</>
// <color value="myCustomRegisteredColor">text</>

#import "GONAttributedMarkup.h"

// Tag
#define GONMarkupColor_TAG                 @"color"

// Attributes
#define GONMarkupColor_TAG_value_ATT       @"value"

@interface GONMarkupColor : GONAttributedMarkup
/* Default markup to add color support */
+ (instancetype)colorMarkup;
@end
