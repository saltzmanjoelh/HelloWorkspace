//
//  ImageUnitPluginFilter.h
//  ImageUnitPlugin
//
//  Created by Joel Saltzman on 2/12/17.
//  Copyright © 2017 Joel Saltzman. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface ImageUnitPluginFilter : CIFilter {
    CIImage      *inputImage;
    CIVector     *inputCenter;
    NSNumber     *inputWidth;
    NSNumber     *inputAmount;
}

@end
