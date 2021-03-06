//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "SBResourceLoader.h"

@class NSThread;

@interface SBProxyRequestHandler : SBResourceLoader
{
    NSThread *thread;
    struct GMAHTTPTunnelProxyConnection *tunnelProxyConnection;
    struct GHTTPTransactor *transactor;
}

- (struct SBResourceRequesterToken *)newTokenWithCallback:(id)arg1;
- (struct GHTTPDataTransport *)newHttpConnectRequestDataTransportFromResourceDesc:(struct SBResourceDesc *)arg1;
- (id)obtainThread;
- (int)obtainResourceForResourceDesc:(struct SBResourceDesc *)arg1 token:(struct SBResourceRequesterToken *)arg2;
- (void)startRequest:(id)arg1 forHttpTunnelProxyConnection:(struct GMAHTTPTunnelProxyConnection *)arg2 withThread:(id)arg3;
- (void)setTransactor:(struct GHTTPTransactor *)arg1;

@end

