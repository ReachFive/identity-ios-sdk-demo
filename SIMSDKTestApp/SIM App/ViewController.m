//
//  ViewController.m
//  SIM App
//
//

#import "ViewController.h"
#import <SimSDK/SimSDK.h>

@interface ViewController ()

@property (nonatomic, weak) IBOutlet UILabel* responseLabel;
@end

@implementation ViewController

@synthesize responseLabel;


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self.navigationController setNavigationBarHidden:YES animated:YES];
    [self.navigationController setToolbarHidden:YES animated:YES];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(IBAction) onDisplayWithTheme:(id)sender
{
    NSLog(@">> onDisplayWithTheme ");
    responseLabel.text = @"";
    R5LoginViewControlleCallback callBack = ^(R5LoginResponse *response, R5Exception *error)
    {
        if (response)
        {
            NSLog(@">> onDisplayWithTheme callback !!! -> Sucessfull\n%@", response.jsonDict);
            responseLabel.text = [NSString stringWithFormat:@"%@", response.jsonDict ];
        }
        else
        {
            NSLog(@">> onDisplayWithTheme callback !!! -> ERROR !!! %@", error.message);
            responseLabel.text = [NSString stringWithFormat:@"ERROR !!!\n%@", error.message ];
        }
        
    };
    
    [R5Client displayLoginButtons:@"homepage" onView:self onLoginResponse:callBack];
    
}

-(IBAction) onLoginWithProvider:(id)sender
{
    NSLog(@">> onLoginWithProvider %d", (int)((UIView*)sender).tag);
    responseLabel.text = @"";
    R5LoginViewControlleCallback callBack = ^(R5LoginResponse *response, R5Exception *error)
    {
        if (response)
        {
            NSLog(@">> onLoginWithProvider callback !!! -> Sucessfull\n%@", response.jsonDict);
            responseLabel.text = [NSString stringWithFormat:@"%@", response.jsonDict ];
        }
        else
        {
            NSLog(@">> onLoginWithProvider callback !!! -> ERROR !!! %@", error.message);
            responseLabel.text = [NSString stringWithFormat:@"ERROR !!!\n%@", error.message ];
        }
        
    };
    
    switch ((int)((UIView*)sender).tag) {
        case 1:
            [R5Client loginWithProvider:R5Facebook origin:@"homepage" onLoginResponse:callBack];
            break;
        case 2:
            [R5Client loginWithProvider:R5Google origin:nil onView:self onLoginResponse:callBack];
            break;
        case 3:
            [R5Client loginWithProvider:R5Twitter origin:@"homepage" onLoginResponse:callBack];
            break;
        case 4:
            [R5Client loginWithProvider:R5Paypal origin:@"homepage" onView:self onLoginResponse:callBack];
            break;
            
        default:
            break;
    }
    
    
    
}

@end
