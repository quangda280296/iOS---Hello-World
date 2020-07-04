//
//  LinphoneManagerPublic.h
//  MytelSupportSDK
//
//  Created by thanhdat on 1/2/19.
//  Copyright © 2019 Viettel. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LinphoneManager : NSObject
+ (LinphoneManager*)instance;
- (NSInteger) vtgGetRegistrationStateInt;
- (void) vtgConfigProxyWithSipAddr:(NSString *)sipAddr
                         proxyAddr:(NSString *)proxyAddr
                       displayName:(NSString *)name
                          password:(NSString *)pwd;
- (void) vtgInviteCall:(NSString *)dstAddr
           videoWindow:(UIView*)video
         previewWindow:(UIView*)preview
                callID:(NSString *)callID
                 video:(BOOL) enable;
- (void)startLinphoneCore;
- (void)destroyLinphoneCore;
- (void) vtgRequestVideo;
- (void) vtgSwitchCamera;
- (void) vtgHangup;
- (BOOL) vtgIsCalling;
- (BOOL) vtgIsMicEnabled;
- (void) vtgEnableMic:(BOOL)enable;
- (NSString *) vtgGetCallDuration;
-(void)showVideo:(BOOL)enable callback:(void(^)(void *user_data))cb viewController:(UIViewController*)vc;
//- (void) vtgShowVideo:(BOOL)enable
//             callBack:(LinphoneCallCbFunc)cb
//       viewController:(UIViewController*)vc;
@property (nonatomic, assign) BOOL speakerEnabled;
@end
