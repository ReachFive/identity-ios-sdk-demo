//
//  R5Authentication.h
//  SimSDK
//
//

#import <Foundation/Foundation.h>

@interface R5Authentication : NSObject
@property (nonatomic, strong, readonly) NSDictionary* jsonDict;

@property (nonatomic, strong, readonly) NSString* accessToken;
@property (nonatomic, assign, readonly) NSInteger expires;    //delai d’expiration du jeton en secondes

-(id) initWithDictionary:(NSDictionary*) jsonDictionary;

@end
