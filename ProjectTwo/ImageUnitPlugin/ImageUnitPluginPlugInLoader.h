//
//  ImageUnitPluginPlugInLoader.h
//  ImageUnitPlugin
//
//  Created by Joel Saltzman on 2/12/17.
//  Copyright © 2017 Joel Saltzman. All rights reserved.
//

#import <QuartzCore/CoreImage.h>

@interface ImageUnitPluginPlugInLoader : NSObject <CIPlugInRegistration>

- (BOOL)load:(void *)host;

@end
