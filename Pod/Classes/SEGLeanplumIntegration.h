//
//  SEGLeanplumIntegration.h
//  Leanplum Segment iOS Integration Version 1.0.0
//
//  Copyright (c) 2016 Leanplum. All rights reserved.
//

#import <Analytics/SEGAnalytics.h>
#import <Foundation/Foundation.h>

@interface SEGLeanplumIntegration : NSObject <SEGIntegration>

- (instancetype)initWithSettings:(NSDictionary *)settings;

@end
