#pragma once
#include "lib/defines.hpp"
#include "app.h"
#include "text.h"
#include "fade.h"
#include "object.h"

class cTitle{
	//画像
	Texture back_pic;
public:
	//コンストラクタ
	cTitle();
	//デストラクタ
	~cTitle();

	//画面更新
	void update();
	//描画
	void draw();
	//初期化
	void Reset();

	//タイトル終了判定
	bool title_end_bool;

private:

	//タイトル内での画面切り替え
	void change();

	//処理
	int proce_sw;

	//テキストクラス読み込み
	cText Text;
	//フェードクラス読み込み
	cFade Fade;

	//画像情報
	Texture_info backs;

	//処理の切り替え（タイトル内での）
	enum proce_name{
		MUSIC_START,
		FADE_IN,
		BASIC,
		FADE_OUT,
	};
};