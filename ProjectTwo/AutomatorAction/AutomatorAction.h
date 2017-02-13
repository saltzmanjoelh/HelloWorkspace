//
//  AutomatorAction.h
//  AutomatorAction
//
//  Created by Joel Saltzman on 2/12/17.
//  Copyright © 2017 Joel Saltzman. All rights reserved.
//

#import <Automator/AMBundleAction.h>

@interface AutomatorAction : AMBundleAction

- (id)runWithInput:(id)input fromAction:(AMAction *)anAction error:(NSDictionary **)errorInfo;

@end
