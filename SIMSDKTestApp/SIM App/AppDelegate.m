//
//  AppDelegate.m
//  SIM App
//
//

#import "AppDelegate.h"
#import <SimSDK/SimSDK.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    R5InitFinishedCallback callBack = ^(R5Exception * error)
    {
        if (error)
        {
            NSLog(@">> onLoginWithProvider callback, SIM Native SDK Init Error \n%@", error.message);
            
        }
        else
        {
            NSLog(@">> onLoginWithProvider callback SIM Native SDK Init with success !");
        }
        
    };
    
    
    [R5Client init:@"reach5.og4.me"
            apiKey:@"BvnynWPdlUOGwC3yERXi"
         providers:nil
      onInitFinish:callBack];
    
    [R5Client application:application didFinishLaunchingWithOptions:launchOptions];

    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    [R5Client didBecomeActive];
}

- (void)applicationWillTerminate:(UIApplication *)application {
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    return [R5Client application:application
                         openURL:url
               sourceApplication:sourceApplication
                      annotation:annotation];
}

@end
