//
//  Foo.m
//  AFSDK
//
//  Created by junhai on 2019/5/20.
//  Copyright © 2019 hello. All rights reserved.
//

#import "Foo.h"

#import "AppsFlyerTracker.h"

@implementation Foo

- (void)foo {
    [AppsFlyerTracker sharedTracker].isDebug = NO;
    
    [[AppsFlyerTracker sharedTracker] trackAppLaunch];
    
    [AppsFlyerShareInviteHelper trackInvite:@"AppsFlyerShareInviteHelper" parameters:nil];
    
    [AppsFlyerTracker sharedTracker].appleAppID = @"appleAppID";
    
    [AppsFlyerTracker sharedTracker].appsFlyerDevKey = @"appsFlyerDevKey";
    
    [AppsFlyerCrossPromotionHelper trackCrossPromoteImpression:@"trackCrossPromoteImpression" campaign:nil];
}

@end
