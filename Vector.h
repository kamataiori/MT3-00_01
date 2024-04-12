#pragma once
#include <struct.h>
#include <assert.h>
#include <math.h>
#include <Novice.h>

//加算
Vector3 Add(const Vector3& v1, const Vector3& v2);

//減算
Vector3 Subtract(const Vector3& v1, const Vector3& v2);

//スカラー倍
Vector3 Multiply(float scalar, const Vector3& v);

//内積
float Dot(const Vector3& v1, const Vector3& v2);

//長さ（ノルム)
float Length(const Vector3& v);

//正規化
Vector3 Normalaze(const Vector3& v);

//数値表示
static const int kColumnWidth = 60;
static const int kRowHeight = 20;

void VectorScreenPrint(int x, int y, const Vector3& vector, const char* label);
