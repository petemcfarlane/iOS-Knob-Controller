//
//  RWKnobControl.h
//  KnobControl
//
//  Created by Pete McFarlane on 30/05/2015.
//  Copyright (c) 2015 RayWenderlich. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RWKnobControl : UIControl
#pragma mark - Knob value
/**
 Contains the current value
 */
@property (nonatomic, assign) CGFloat value;

/**
 Sets the value the knob should represent, with optional animation of the change
 */
- (void)setValue:(CGFloat)value animated:(BOOL)animated;

#pragma mark - Value Limits
/**
 Minimum value of the knob. Defaults to 0
 */
@property (nonatomic, assign) CGFloat minimumValue;

/**
 Maximum value of the knob. Defaults to 1
 */
@property (nonatomic, assign) CGFloat maximumValue;

#pragma mark - Knob Behaviour
/**
 Contains a Boolean value indicating whether changes in value of the knob generate continuous update events. Default is 'YES'
 */
@property (nonatomic, assign, getter = isContinuous) BOOL continuous;

/**
 Specifies the angle of the start of the knob control track. Defaults to -11π/8
 */
@property (nonatomic, assign) CGFloat startAngle;

/**
 Specifies the end angle of the knob control track. Defaults to 3π/8
 */
@property (nonatomic, assign) CGFloat endAngle;

/**
 Specifies the width in points of the knob control track. Defaults to 2.0
 */
@property (nonatomic, assign) CGFloat lineWidth;

/**
 Specifies the length in points of the pointer on the knob. Defaults to 6.0
 */
@property (nonatomic, assign) CGFloat pointerLength;

@end
