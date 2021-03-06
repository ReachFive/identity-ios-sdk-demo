//
//  R5Exception.h
//  SimSDK
//
//

#import <Foundation/Foundation.h>

typedef enum{
    FETCH_PROVIDERS_EMPTY_LIST_CODE=1,
    FETCH_PROVIDERS_WITHOUT_ITEMS_CODE,
    FETCH_PROVIDERS_NULL_OR_BADFORMAT_CODE,
    FETCH_PROVIDERS_REQUEST_ERROR_CODE,
    
    FACEBOOK_NATIVE_CONNECTION_ERROR_CODE,
    FACEBOOK_NATIVE_CONNECTION_CANCELLED_CODE,
    FACEBOOK_NATIVE_CONNECTION_EMPTY_ACCESS_TOKEN_CODE,
    FACEBOOK_NATIVE_CONNECTION_UNAVAILABLE_CODE,
    
    GOOGLE_NATIVE_CONNECTION_UNAVAILABLE_CODE,
    GOOGLE_NATIVE_CONNECTION_ERROR_CODE,
    GOOGLE_NATIVE_CONNECTION_EMPTY_ACCESS_TOKEN_CODE,
    
    TWITTER_NATIVE_CONNECTION_UNAVAILABLE_CODE,
    TWITTER_NATIVE_CONNECTION_ERROR_CODE,
    TWITTER_NATIVE_CONNECTION_EMPTY_ACCESS_TOKEN_CODE,

    PAYPAL_NATIVE_CONNECTION_UNAVAILABLE_CODE,
    PAYPAL_NATIVE_CONNECTION_CANCELLED_CODE,
    
    BUTTONS_NATIVE_CONNECTION_CANCELLED_CODE,

    WEBSERVICE_LOGIN_REQUEST_ERROR_CODE,
    WEBSERVICE_LOGIN_REPONSE_NULL_CODE,
    
} R5ErrorCode;

@interface R5Exception : NSObject

@property (atomic, strong, readonly) NSString *message;

@property (atomic, assign, readonly) R5ErrorCode code;


-(id) initWithCode:(R5ErrorCode) errCode message:(NSString*) msg;

@end
