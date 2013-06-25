//
//  ApigeeMonitoringOptions.h
//  ApigeeiOSSDK
//
//  Created by Paul Dardeau on 5/20/13.
//  Copyright (c) 2013 Apigee. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ApigeeUploadListener.h"


@interface ApigeeMonitoringOptions : NSObject

@property(assign, nonatomic) BOOL monitoringEnabled;
@property(assign, nonatomic) BOOL crashReportingEnabled;
@property(assign, nonatomic) BOOL interceptNetworkCalls;
@property(assign, nonatomic) id<ApigeeUploadListener> uploadListener;  // weak reference

@end
