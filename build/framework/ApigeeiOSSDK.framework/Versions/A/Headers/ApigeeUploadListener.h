//
//  ApigeeUploadListener.h
//  ApigeeAppMonitor
//
//  Created by Paul Dardeau on 4/3/13.
//  Copyright (c) 2013 Apigee. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ApigeeUploadListener <NSObject>

- (void)onUploadMetrics:(NSString*)metricsPayload;
- (void)onUploadCrashReport:(NSString*)crashReportPayload;

@end
