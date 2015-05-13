#pragma once
#include"lib/defines.hpp"
#include"app.h"
#include"object.h"

class cMenu{
	//画像
	Texture back_pic;
public:
	//コンストラクタ
	cMenu();
	//デストラクタ
	~cMenu();

	//画面更新
	void update();
	//描画
	void draw();
	//初期化
	void reset();
	//画面切り替え
	int change(int);

private:

	//画像情報
	Texture_info backs;
	//メニュー情報
	Texture_info manus[3];
};