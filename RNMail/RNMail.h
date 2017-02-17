#import <UIKit/UIKit.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTConvert.h>
#import <React/RCTLog.h>

@interface RNMail : NSObject <RCTBridgeModule, MFMailComposeViewControllerDelegate>

@end
