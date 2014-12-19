//
//  GameView.h
//  MetalGame
//
//  Created by 何遵祖 on 14-12-15.
//  Copyright (c) 2014年 何遵祖. All rights reserved.
//

/*
 *  搭建基础渲染环境
 */


#import <QuartzCore/CAMetalLayer.h>
#import <Metal/Metal.h>
#import <UIKit/UIKit.h>

@protocol GameViewDelegate;

@interface GameView : UIView

@property (nonatomic, weak) IBOutlet id <GameViewDelegate> delegate;

@property (nonatomic, readonly) id <MTLDevice> device;

@property (nonatomic, readonly) id <CAMetalDrawable> currentDrawable;

@property (nonatomic, readonly) MTLRenderPassAttachmentDescriptor *renderPassDescriptor;

@property (nonatomic) MTLPixelFormat depthPixelFormat;
@property (nonatomic) MTLPixelFormat stencilPixelFormat;
@property (nonatomic) NSUInteger sampleCount;

- (void)display;
- (void)releaseTextures;

@end

@protocol GameViewDelegate <NSObject>

@required

- (void)reshape:(GameView *)view;
- (void)render:(GameView *)view;

@end