//
//  AppDelegate.h
//  SharingPicker
//
//  Created by Manuel "StuFF mc" Carrasco Molina on 18/02/14.
//  Copyright (c) 2014 Manuel "StuFF mc" Carrasco Molina. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSSharingServicePickerDelegate, NSSharingServiceDelegate>

@property (assign) IBOutlet NSWindow *window;

@end

@interface NSSharingService (ActivityType)

@property (readonly, nonatomic, retain) NSString *activityType;

@end