#include "Vector.h"

Vector3 Add(const Vector3& v1, const Vector3& v2)
{
	Vector3 AddResult{};

	AddResult.x = v1.x + v2.x;
	AddResult.y = v1.y + v2.y;
	AddResult.z = v1.z + v2.z;

	return AddResult;
}

Vector3 Subtract(const Vector3& v1, const Vector3& v2)
{
	Vector3 SubtractResult{};

	SubtractResult.x = v1.x - v2.x;
	SubtractResult.y = v1.y - v2.y;
	SubtractResult.z = v1.z - v2.z;

	return SubtractResult;
}

Vector3 Multiply(float scalar, const Vector3& v)
{
	Vector3 MultiplyResult{};

	MultiplyResult.x = scalar * v.x;
	MultiplyResult.y = scalar * v.y;
	MultiplyResult.z = scalar * v.z;

	return MultiplyResult;
}

float Dot(const Vector3& v1, const Vector3& v2)
{
	float DotResult{};

	DotResult = (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);

	return DotResult;
}

float Length(const Vector3& v)
{
	float LengthResult{};

	LengthResult = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

	return LengthResult;
}

Vector3 Normalaze(const Vector3& v)
{
	Vector3 NormalazeResult{};
	float LengthResult{};

	LengthResult = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

	if (LengthResult != 0.0f)
	{
		NormalazeResult.x = v.x / LengthResult;
		NormalazeResult.y = v.y / LengthResult;
		NormalazeResult.z = v.z / LengthResult;
	}

	return NormalazeResult;

}

void VectorScreenPrint(int x, int y, const Vector3& vector, const char* label)
{
	Novice::ScreenPrintf(x, y, "%.02f", vector.x);
	Novice::ScreenPrintf(x + kColumnWidth, y, "%.02f", vector.y);
	Novice::ScreenPrintf(x + kColumnWidth * 2, y, "%.02f", vector.z);
	Novice::ScreenPrintf(x + kColumnWidth * 3, y, "%s", label);
}
