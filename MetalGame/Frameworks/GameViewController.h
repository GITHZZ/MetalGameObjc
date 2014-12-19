//
//  GameViewController.h
//  MetalGame
//
//  Created by 何遵祖 on 14-12-9.
//  Copyright (c) 2014年 何遵祖. All rights reserved.
//

/*
 *  整个游戏框架的主入口类,只做逻辑处理,不做渲染处理.
 *  渲染相关将放到GameView文件中
 */

#import <UIKit/UIKit.h>


@protocol GameViewControllerDelegate;

@interface GameViewController : UIViewController

@property (nonatomic, weak) IBOutlet id <GameViewControllerDelegate> delegate;

@property (nonatomic, readonly) NSTimeInterval timeSinceLastDraw;

@property (nonatomic) NSUInteger interval;

@property (nonatomic, getter=isPaused) BOOL paused;

- (void) dispatchGameLoop;

- (void) stopGameLoop;

@end

@protocol GameViewControllerDelegate <NSObject>
@required

- (void)update:(GameViewController *)controller;
- (void)viewController:(GameViewController *)controller willPause:(BOOL)pause;
@end
