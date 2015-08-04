//
//  R5Like.h
//  SimSDK
//
//

#import <Foundation/Foundation.h>

@interface R5Like : NSObject
@property (nonatomic, strong, readonly) NSDictionary* jsonDict;

@property (nonatomic, strong, readonly) NSString* name;//  string  Nom de la page “likée”
@property (nonatomic, strong, readonly) NSString* category; // string  catégorie de la page “likée”
@property (nonatomic, assign, readonly) NSInteger created;//long  Date de création du like au format ISO­8601   (par ex. 1965­12­31T23:00:00.000Z)

-(id) initWithDictionary:(NSDictionary*) jsonDictionary;

@end
