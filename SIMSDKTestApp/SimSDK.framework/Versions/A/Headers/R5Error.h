//
//  R5Error.h
//  SimSDK
//
//

#import <Foundation/Foundation.h>

@interface R5Error : NSObject
@property (nonatomic, strong, readonly) NSDictionary* jsonDict;

@property (nonatomic, strong, readonly) NSString* code;
@property (nonatomic, strong, readonly) NSString* message;


-(id) initWithDictionary:(NSDictionary*) jsonDictionary;

@end
