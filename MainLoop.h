#pragma once
#include <Novice.h>
#include <Result.h>

const char kWindowTitle[] = "LE2B_16_ツユキ_イオリ_タイトル";

class MainLoop {

private:

	//// キー入力結果を受け取る箱
	char keys[256];
	char preKeys[256];

	Result *result_;

public:

	MainLoop();

	~MainLoop();

	/// 
	/// キー入力を受け取る
	/// 
	void InPut();

	/// 
	/// 更新処理
	/// 
	void Updata();

	///
	/// 描画処理
	///
	void Draw();

	///
	/// 全体のループ
	/// 
	void WholeLoop();
};

