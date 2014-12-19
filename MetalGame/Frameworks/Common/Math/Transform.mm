//
//  Transform.m
//  MetalGame
//
//  Created by 何遵祖 on 14-12-10.
//  Copyright (c) 2014年 何遵祖. All rights reserved.
//

#import <cmath>
#import <iostream>

#import "Transform.h"

Matrix4x4 Math::translate(const Vector3 &t)
{
    Matrix4x4 M = matrix_identity_float4x4;
    M.columns[3].xyz = t;
    
    return M;
}

Matrix4x4 Math::translate(const float &x,
                          const float &y,
                          const float &z)
{
    return Math::translate((Vector3){x, y, z});
}
