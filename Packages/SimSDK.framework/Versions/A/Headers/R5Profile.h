//
//  NSR5Profile.h
//  SimSDK
//
//

#import <Foundation/Foundation.h>
#import "R5Like.h"

@interface R5Profile : NSObject
@property (nonatomic, strong, readonly) NSDictionary* jsonDict;

@property (nonatomic, strong, readonly) NSString* uid;
@property (nonatomic, strong, readonly) NSString* signedUid;
@property (nonatomic, strong, readonly) NSArray* providers;//List<String>
@property (nonatomic, strong, readonly) NSString* firstName;
@property (nonatomic, strong, readonly) NSString* lastName;
@property (nonatomic, strong, readonly) NSString* username;
@property (nonatomic, strong, readonly) NSString* fullName;
@property (nonatomic, strong, readonly) NSString* email;
@property (nonatomic, strong, readonly) NSString* birthDate;//Date de Naissance au format ISO­8601   (par ex. 1965­12­31T23:00:00.000Z)
@property (nonatomic, strong, readonly) NSString* gender;//SEX
@property (nonatomic, strong, readonly) NSString* city;
@property (nonatomic, strong, readonly) NSString* country;
@property (nonatomic, strong, readonly) NSString* photoURL;
@property (nonatomic, strong, readonly) NSArray* interests;//List<R5Like>
@property (nonatomic, strong, readonly) NSArray* activities;//NSList<R5Like>
@property (nonatomic, strong, readonly) NSString* profileURL;
@property (nonatomic, strong, readonly) NSArray* likes;//NSList<R5Like>  Liste des likes Facebook
@property (nonatomic, strong, readonly) NSArray* languages;//NSList<String>
@property (nonatomic, strong, readonly) NSString* bio;//Courte biographie de la personne
@property (nonatomic, strong, readonly) NSString* relationshipStatus;// Situation amoureuse de la personne
@property (nonatomic, strong, readonly) NSString* hometown;// Ville de naissance
@property (nonatomic, strong, readonly) NSArray* favorites;//NSList<String>
@property (nonatomic, strong, readonly) NSString* locale;
@property (nonatomic, assign, readonly) NSInteger timezone;// fuseau horaire de l’utilisateur
@property (nonatomic, assign, readonly) NSInteger followersCount ;// Nombre de followers twitter
@property (nonatomic, assign, readonly) NSInteger friendsCount ;//Nombre d’amis Facebook ou de following Twitter

-(id) initWithDictionary:(NSDictionary*) jsonDictionary;

@end
