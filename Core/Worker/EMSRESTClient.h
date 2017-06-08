//
//  Copyright (c) 2017 Emarsys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMSCoreCompletion.h"
#import "EMSRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^EMSRestClientCompletionBlock)(BOOL shouldContinue);
@interface EMSRESTClient : NSObject

+ (EMSRESTClient *)clientWithSuccessBlock:(CoreSuccessBlock)successBlock
                               errorBlock:(CoreErrorBlock)errorBlock;

+ (EMSRESTClient *)clientWithSuccessBlock:(CoreSuccessBlock)successBlock
                               errorBlock:(CoreErrorBlock)errorBlock
                                  session:(NSURLSession *)session;


- (void)executeTaskWithRequestModel:(EMSRequestModel *)requestModel;

- (void)executeTaskWithOfflineCallbackStrategyWithRequestModel:(EMSRequestModel *)requestModel
                                                    onComplete:(EMSRestClientCompletionBlock)onComplete;


@end

NS_ASSUME_NONNULL_END