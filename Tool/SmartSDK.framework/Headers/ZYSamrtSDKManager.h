//
//  ZYSamrtSDKManager.h
//  SmartSDK
//
//  Created by Find on 2022/4/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZYSamrtSDKManager : NSObject


+ (void)initThirdManager;

+(void)presnetSmarHome:(NSDictionary *)parameters;

+(void)parentVC:(id)parentVC toSmarHome:(NSDictionary *)parameters;

@end

NS_ASSUME_NONNULL_END
