//
//  NSDictionary+CMJSON.h
//  cloudmine-ios
//
//  Created by Ethan Mick on 10/24/13.
//  Copyright (c) 2015 CloudMine, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (CMJSON)

- (NSString *)jsonString;
- (NSData *)jsonData;

@end
