//
//  KeyConstants.h
//  VizuryEventLogger
//
//  Created by Akshat Singhal on 06/01/15.
//  Copyright (c) 2015 vizury. All rights reserved.
//

#ifndef VizuryEventLogger_KeyConstants_h
#define VizuryEventLogger_KeyConstants_h


#define VIZ_PACKAGE_ID  @"PACKAGE_ID"
#define SERVER_URL		@"SERVER_URL"
#define INITIALISED		@"INITIALISED"

#define EVENT_NAME_KEY              @"vizard_event_name"
#define VIZ_KEY_PACKAGE_ID			@"package_id"
#define VIZ_KEY_ADVERTISING_ID		@"adv_id"
#define VIZ_KEY_LIMIT_TRACKING		@"is_lat"
#define VIZ_KEY_API_VERSION			@"api_ver"
#define VIZ_KEY_APP_NAME			@"app_name"
#define VIZ_KEY_APP_VERSION			@"app_ver"
#define VIZ_KEY_APP_INSTALL_DATE	@"i_dt"
#define VIZ_KEY_APP_UPDATE_DATE		@"u_dt"
#define VIZ_KEY_GCM_TOKEN           @"gcmid"
#define VIZ_BANNER_ID_KEY           @"bannerid"
#define VIZ_ZONR_ID_KEY             @"zoneid"
#define VIZ_NOTIFICATION_ID         @"notificationid"
#define VIZ_PUSH_FROM               @"push_from"
#define VIZ_PUSH_SOURCE_VIZURY      @"vizury"
#define VIZ_IMPRESSION_RECEIPT      @"impression"
#define VIZ_CLICK_RECEIPT           @"click"
#define VIZ_PUSH_ENABLED            @"pushenabled"

#define VIZ_CLICK_URL               @"https://www.vizury.com/vizserver//www/delivery/ck.php"
#define VIZ_IMPR_URL                @"https://www.vizury.com/campaign/showad.php"

#define IS_NOTIFICATION_ALERT_ENABLED  @"isNotificationEnabled"

#define MACRO(string) [NSString stringWithFormat:@"{{%@}}",string]

#endif
