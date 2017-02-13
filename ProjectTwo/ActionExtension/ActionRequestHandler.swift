//
//  ActionRequestHandler.swift
//  ActionExtension
//
//  Created by Joel Saltzman on 2/12/17.
//  Copyright © 2017 Joel Saltzman. All rights reserved.
//

import Foundation

class ActionRequestHandler: NSObject, NSExtensionRequestHandling {

    func beginRequest(with context: NSExtensionContext) {
        // Get the input item
        let item = context.inputItems[0] as! NSExtensionItem
        let content = item.attributedContentText
        NSLog("Content %@", content!)
        
        // Transform the content
        let newContent = (content == nil) ? NSMutableAttributedString() : content!.mutableCopy() as! NSMutableAttributedString
        
        if newContent.length > 0 {
            newContent.mutableString.append("ABC")
            item.attributedContentText = newContent
            
            // Notify the action is done with success
            context.completeRequest(returningItems: [item], completionHandler: nil)
        } else {
            // Notify the action failed to complete, use an appropriate error
            context.cancelRequest(withError: NSError(domain: NSCocoaErrorDomain, code: NSUserCancelledError, userInfo: nil))
        }
    }

}
