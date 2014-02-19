//
//  STColorPicker.h
//  STColorPickerExample
//
//  Created by Sebastien Thiebaud on 12/7/13.
//  Copyright (c) 2013 Sebastien Thiebaud. All rights reserved.
//

@interface STColorPicker : UIView

@property (nonatomic, copy) void (^colorHasChanged)(UIColor *color, CGPoint location);

/**
 *  Select the color passed as parameter and position the glass.
 *  Not all colors are visible in the picker, so if a color is not found, select the color
 *  located at (0,0) and return NO.
 *
 *  @param color The Color to select
 *
 *  @return Return if the color has been selected (found) or not
 */
- (BOOL)selectColor:(UIColor *)color;

@end
