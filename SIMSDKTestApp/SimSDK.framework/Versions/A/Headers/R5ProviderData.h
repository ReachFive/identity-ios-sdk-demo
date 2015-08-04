//
//  R5ProviderData.h
//  SimSDK
//
//

#import <Foundation/Foundation.h>

@interface R5ProviderData : NSObject
@property (nonatomic, strong, readonly) NSDictionary* jsonDict;

@property (nonatomic, strong, readonly) NSString* provider;
@property (nonatomic, strong, readonly) NSString* clientId;
@property (nonatomic, strong, readonly) NSString* clientSecret;

@property (nonatomic, strong, readonly) NSString* merchantName;
@property (nonatomic, strong, readonly) NSString* merchantPrivacyPolicyUri;
@property (nonatomic, strong, readonly) NSString* merchantUserAgreementUri;

@property (nonatomic, strong, readonly) NSArray* scope;//List<String>

-(id) initWithDictionary:(NSDictionary*) jsonDictionary;

@end
