//
//  UserDefaultsManager.m
//  VizuryEventLogger
//
//  Created by Akshat Singhal on 07/11/14.
//  Copyright (c) 2014 vizury. All rights reserved.
//

#import "UserDefaultsManager.h"
#import "KeyConstants.h"

#define USER_DEFAULTS_PREFIX    @"VIZURY_"


@implementation UserDefaultsManager

+ (BOOL)getUserDefaultBoolForKey:(NSString *)key
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    return [defaults boolForKey:[self getVizuryUserDefaultKeyForKey:key]];
}

+ (NSObject *)getUserDefaultObjectForKey:(NSString *)key
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    return [defaults objectForKey:[self getVizuryUserDefaultKeyForKey:key]];
}

+ (NSString *)getUserDefaultStringForKey:(NSString *)key
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    return [defaults objectForKey:[self getVizuryUserDefaultKeyForKey:key]];
}

+ (void)setUserDefaultObject:(NSObject *)object ForKey:(NSString *)key
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setObject:object forKey:[self getVizuryUserDefaultKeyForKey:key]];
    [defaults synchronize];
}

+ (void)setUserDefaultBool:(BOOL)object ForKey:(NSString *)key
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setBool:object forKey:[self getVizuryUserDefaultKeyForKey:key]];
    [defaults synchronize];
}

+ (NSString *)getVizuryUserDefaultKeyForKey:(NSString *)key
{
    return [NSString stringWithFormat:@"%@%@",USER_DEFAULTS_PREFIX, key];
}

+ (void)clearUserDefaultObjectForKey:(NSString *)key
{
	[self setUserDefaultObject:nil ForKey:key];
}


+ (NSString *)getServerURL {
	return [self getUserDefaultStringForKey:SERVER_URL];
}

+ (void)setServerURL:(NSString *)serverURL {
	[self setUserDefaultObject:serverURL ForKey:SERVER_URL];
}

+ (BOOL)initialisedStatus {
	NSNumber *status = (NSNumber *)[self getUserDefaultObjectForKey:INITIALISED];
	if ([status isKindOfClass:[NSNumber class]] && status != nil) {
		return [status boolValue];
	}
	else {
		return false;
	}
}

+ (void)setInitializedStatus:(BOOL)status {
	[self setUserDefaultObject:[NSNumber numberWithBool:status] ForKey:INITIALISED];
}

@end
