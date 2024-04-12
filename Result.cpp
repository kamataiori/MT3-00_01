#include "Result.h"

Result::Result()
{

}

void Result::Updata()
{
}

void Result::Draw()
{
	
	VectorScreenPrint(0, 0, resultAdd, " : Add");
	VectorScreenPrint(0, kRowHeight, resultSubtract, " : Subtract");
	VectorScreenPrint(0, kRowHeight * 2, resultMultiply, " : Multiply");
	Novice::ScreenPrintf(0, kRowHeight * 3, "%.02f : Dot", resultDot);
	Novice::ScreenPrintf(0, kRowHeight * 4, "%.02f : Length", resultLength);
	VectorScreenPrint(0, kRowHeight * 5, resultNormalaze, " : Normalaze");
}
