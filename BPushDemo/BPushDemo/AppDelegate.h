//
//  AppDelegate.h
//  BPushDemo
//
//  Created by 馍馍帝👿 on 2018/5/31.
//  Copyright © 2018年 馍馍帝👿. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

