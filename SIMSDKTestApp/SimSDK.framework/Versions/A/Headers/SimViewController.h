//
//  ViewController.h
//  SDK
//
//

#import <UIKit/UIKit.h>
#import "R5Client.h"

@interface SimViewController : UIViewController<UIWebViewDelegate>

-(id) initUrl:(NSString*) urlStr callBack:(R5LoginViewControlleCallback) callBack;

@end
