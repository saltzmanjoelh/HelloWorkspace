//
//  main.m
//  AppleScriptApplication
//
//  Created by Joel Saltzman on 2/12/17.
//  Copyright © 2017 Joel Saltzman. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <AppleScriptObjC/AppleScriptObjC.h>

int main(int argc, const char * argv[]) {
    [[NSBundle mainBundle] loadAppleScriptObjectiveCScripts];
    return NSApplicationMain(argc, argv);
}
