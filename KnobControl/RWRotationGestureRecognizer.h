//
//  RWRotationGestureRecognizer.h
//  KnobControl
//
//  Created by Pete McFarlane on 30/05/2015.
//  Copyright (c) 2015 RayWenderlich. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RWRotationGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic, assign) CGFloat touchAngle;

@end
