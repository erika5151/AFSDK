//
//  AFSDKFramework.h
//  AFSDKFramework
//
//  Created by junhai on 2019/5/20.
//  Copyright © 2019 hello. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for AFSDKFramework.
FOUNDATION_EXPORT double AFSDKVersionNumber;

//! Project version string for AFSDKFramework.
FOUNDATION_EXPORT const unsigned char AFSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AFSDKFramework/PublicHeader.h>


#import <AFSDK/AppsFlyerTracker.h>

/*
 以下api可以调用
 
 [AppsFlyerTracker sharedTracker];
 
 [[AppsFlyerTracker sharedTracker] setCurrencyCode:@"USD"];
 
 [AppsFlyerTracker sharedTracker].isDebug = NO;
 
 [[AppsFlyerTracker sharedTracker] trackAppLaunch];
 
 [AppsFlyerShareInviteHelper trackInvite:@"AppsFlyerShareInviteHelper" parameters:nil];
 
 [AppsFlyerTracker sharedTracker].appleAppID = @"appleAppID";
 
 [AppsFlyerTracker sharedTracker].appsFlyerDevKey = @"appsFlyerDevKey";
 
 [AppsFlyerCrossPromotionHelper trackCrossPromoteImpression:@"trackCrossPromoteImpression" campaign:nil];
 
 */
