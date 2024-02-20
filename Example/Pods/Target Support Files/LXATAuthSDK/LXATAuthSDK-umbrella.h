#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ATAuthSDK.h"
#import "PNSReporter.h"
#import "PNSReturnCode.h"
#import "TXCommonHandler.h"
#import "TXCommonUtils.h"
#import "TXCustomModel.h"

FOUNDATION_EXPORT double LXATAuthSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char LXATAuthSDKVersionString[];

