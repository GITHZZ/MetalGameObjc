//
//  GameView.m
//  MetalGame
//
//  Created by 何遵祖 on 14-12-15.
//  Copyright (c) 2014年 何遵祖. All rights reserved.
//

#import "GameView.h"

@implementation GameView
{
@private
    __weak CAMetalLayer *_metalLayer;
    
    BOOL _layerSizeDidUpdate;
    
    id <MTLTexture> _depthTex;
    id <MTLTexture> _stencilTex;
    id <MTLTexture> _msaaTex;
}

- (void)releaseTextures
{
    _depthTex = nil;
    _stencilTex = nil;
    _msaaTex = nil;
}

+ (Class)layerClass
{
    return [CAMetalLayer class];
}

- (void)display
{
    
}

@end
