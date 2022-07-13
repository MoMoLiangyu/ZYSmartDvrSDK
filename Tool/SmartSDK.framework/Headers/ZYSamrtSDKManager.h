//
//  ZYSamrtSDKManager.h
//  SmartSDK
//
//  Created by Find on 2022/4/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZYSamrtSDKManager : NSObject

//单例
+(instancetype)share;

//建立通信通道
- (void)creatChannel;

//第三方初始化
+ (void)initThirdManager;

//直接跳转
+(void)presnetSmarHome:(NSDictionary *)parameters;

//通过控制器跳转
+(void)parentVC:(id)parentVC toSmarHome:(NSDictionary *)parameters;

@end

NS_ASSUME_NONNULL_END
