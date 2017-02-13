//
//  AutomatorAction.m
//  AutomatorAction
//
//  Created by Joel Saltzman on 2/12/17.
//  Copyright © 2017 Joel Saltzman. All rights reserved.
//

#import "AutomatorAction.h"

@implementation AutomatorAction

- (id)runWithInput:(id)input fromAction:(AMAction *)anAction error:(NSDictionary **)errorInfo
{
    // Add your code here, returning the data to be passed to the next action.
    
    return input;
}

@end
