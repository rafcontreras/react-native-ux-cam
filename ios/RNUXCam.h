//
//  RNUXCam.h
//  RNUXCam
//
//  Created by Mark Miyashita on 10/22/16.
//  Copyright © 2016 Mark Miyashita. All rights reserved.
//

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else // back compatibility for RN version < 0.40
#import "RCTBridgeModule.h"
#endif


@interface RNUXCam : NSObject <RCTBridgeModule>
@end
