#pragma once
#include"lib/defines.hpp"
#include"lib/font.hpp"
#include"app.h"

class cText{
public:

	//フォントを読み込む
	Font font;

	//コンストラクタ
	cText();
	//デストラクタ
	~cText();

	//エンターキーを押してください
	void push_Enter();
private:

	//ふわふわさせる為の変数
	float angle;
	float sin;
};