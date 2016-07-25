//
//  AgentConnection.h
//  Sparkle
//
//  Created by Mayur Pawashe on 7/17/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AgentConnectionDelegate <NSObject>

- (void)agentConnectionDidInitiate;
- (void)agentConnectionDidInvalidate;

@end

@protocol SUInstallerAgentProtocol;

@interface AgentConnection : NSObject

- (instancetype)initWithHostBundleIdentifier:(NSString *)bundleIdentifier delegate:(id<AgentConnectionDelegate>)delegate;

- (void)startListener;
- (void)invalidate;

@property (nonatomic, readonly, nullable) id<SUInstallerAgentProtocol> agent;
@property (nonatomic, readonly) BOOL connected;

@end

NS_ASSUME_NONNULL_END
