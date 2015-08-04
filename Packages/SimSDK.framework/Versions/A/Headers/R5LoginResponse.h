//
//  R5LoginResponse.h
//  SimSDK
//
//

#import <Foundation/Foundation.h>
#import "R5Error.h"
#import "R5Authentication.h"
#import "R5Profile.h"

@interface R5LoginResponse : NSObject
@property (nonatomic, strong, readonly) NSDictionary* jsonDict;

@property (nonatomic, strong, readonly) NSString* status;//ok, error
@property (nonatomic, strong, readonly) R5Error* error;
@property (nonatomic, strong, readonly) R5Authentication* auth;
@property (nonatomic, strong, readonly) R5Profile* profile;

-(id) initWithDictionary:(NSDictionary*) jsonDictionary;
@end
