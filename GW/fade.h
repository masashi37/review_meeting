#pragma once

#include "lib/defines.hpp"
#include "app.h"
#include "object.h"


class cFade{
	Texture fade_pic;
public:
	//コンストラクタ
	cFade();
	//デストラクタ
	~cFade();

	//描画
	void draw();
	//初期化
	void reset();

	//フェードイン
	void fadeIn();
	//フェードアウト
	void fadeOut();

	//色
	float red;
	float green;
	float blue;

	//アルファ値
	float trans;

private:

	//フェード切り替え
	bool fade_bool;
};