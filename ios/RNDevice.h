
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRNDeviceSpec.h"

@interface RNDevice : NSObject <NativeRNDeviceSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RNDevice : NSObject <RCTBridgeModule>
#endif

@end
