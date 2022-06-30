//
//  UserDefaultsManager.h
//  VizuryEventLogger
//
//  Created by Akshat Singhal on 07/11/14.
//  Copyright (c) 2014 vizury. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UserDefaultsManager : NSObject

+ (NSObject *)getUserDefaultObjectForKey:(NSString *)key;
+ (NSString *)getUserDefaultStringForKey:(NSString *)key;
+ (BOOL)getUserDefaultBoolForKey:(NSString *)key;

+ (void)setUserDefaultObject:(NSObject *)object ForKey:(NSString *)key;
+ (void)clearUserDefaultObjectForKey:(NSString *)key;
+ (void)setUserDefaultBool:(BOOL)object ForKey:(NSString *)key;

+ (void)setServerURL:(NSString *)serverURL;
+ (NSString *)getServerURL;

+ (BOOL)initialisedStatus;
+ (void)setInitializedStatus:(BOOL)status;

@end
