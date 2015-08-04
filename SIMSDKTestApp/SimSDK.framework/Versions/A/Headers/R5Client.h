//
//  R5Client.h
//  SimSDK
//
//

#import <UIKit/UIKit.h>
#import "R5ProviderData.h"
#import "R5Exception.h"

typedef enum {
    R5ThemeLight,
    R5ThemeDark,
    R5ThemeNone,
} R5Theme;

typedef enum {
    R5Facebook,
    R5Google,
    R5Twitter,
    R5Paypal
} R5Provider;

@class R5LoginResponse;
typedef void (^R5LoginViewControlleCallback)(R5LoginResponse * response, R5Exception * error);
typedef void (^R5InitFinishedCallback)(R5Exception * error);

@interface R5Client : NSObject

+ (R5Client*) sharedR5Client;

+ (void) init:(NSString*) domain apiKey:(NSString*) apiKey providers:(NSArray*) provider onInitFinish:(R5InitFinishedCallback) callback;

+(NSString*) r5Provider2NSString:(R5Provider) provider;

+(void) displayLoginButtons:(NSString*) origin onView:(UIViewController*) viewCtrl onLoginResponse:(R5LoginViewControlleCallback)callBack;
+(void) loginWithProvider:(R5Provider) provider origin:(NSString*) origin onLoginResponse:(R5LoginViewControlleCallback) callBack;
+(void) loginWithProvider:(R5Provider) provider origin:(NSString*) origin onView:(UIViewController*) view  onLoginResponse:(R5LoginViewControlleCallback) callBack;

+ (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

+ (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

+ (void) didBecomeActive;

+ (NSString*) getGeviceInfo;

- (void) notifyLoginResponse:(R5LoginResponse*) response exception:(R5Exception*) ex;

- (NSString*) getApiKey;
- (NSString*) getDomain;

@end
