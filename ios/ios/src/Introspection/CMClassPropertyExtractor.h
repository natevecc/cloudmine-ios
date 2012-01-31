//
//  ClassPropertyExtractor.h
//  cloudmine-ios
//
//  Copyright (c) 2011 CloudMine, LLC. All rights reserved.
//  See LICENSE file included with SDK for details.
//

#import <Foundation/Foundation.h>

@interface CMClassPropertyExtractor : NSObject

+ (NSSet *)propertiesForClass:(Class)klass;

@end