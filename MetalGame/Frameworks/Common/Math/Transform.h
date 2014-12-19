//
//  Transform.h
//  MetalGame
//
//  Created by 何遵祖 on 14-12-10.
//  Copyright (c) 2014年 何遵祖. All rights reserved.
//

#ifndef MetalGame_Transform_h
#define MetalGame_Transform_h

#import <simd/simd.h>

typedef simd::float3 Vector3;
typedef simd::float2 Vector2;
typedef simd::float4 Vector4;

typedef simd::float4x4 Matrix4x4;

#ifdef __cplusplus

namespace Math
{
   Matrix4x4 translate(const Vector3& t);
   Matrix4x4 translate(const float& x,
                       const float& y,
                       const float& z);
}

#endif
#endif