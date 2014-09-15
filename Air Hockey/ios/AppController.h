//
//  Air_HockeyAppController.h
//  Air Hockey
//
//  Created by Itua Ijagbone on 1/30/14.
//  Copyright __MyCompanyName__ 2014. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController    *viewController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) RootViewController *viewController;

@end

