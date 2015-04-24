//
//  ToDoItem.h
//  ToDoList
//
//  Created by Fred Chen on 2015-04-07.
//  Copyright (c) 2015 Fred Chen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
