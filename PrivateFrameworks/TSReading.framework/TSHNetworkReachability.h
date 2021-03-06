/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHNetworkReachability : NSObject {
    struct __SCNetworkReachability { } * mReachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;

- (int)currentReachabilityStatus;
- (void)dealloc;
- (id)getFlagsStatus;
- (bool)isReachableByWifi;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (bool)startNotifier;
- (void)stopNotifier;

@end
