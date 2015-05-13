#include "fade.h"

//コンストラクタ
cFade::cFade() : fade_pic("res/fade.png")
{
	//色
	red = 0;
	green = 0;
	blue = 0;

	//アルファ値
	trans = 1;

	//フェード切り替え
	//falseがフェードイン
	fade_bool = false;
}

//デストラクタ
cFade::~cFade()
{
}

//描画
void cFade::draw()
{
	//フェード画像
	drawTextureBox(-WIDTH / 2, -HEIGHT / 2,
		WIDTH, HEIGHT,
		0, 0, 512, 512,
		fade_pic, Color(red, green, blue, trans));
}

//初期化
void cFade::reset()
{
	//色
	red = 0;
	green = 0;
	blue = 0;

	//アルファ値
	trans = 1;

	//フェード切り替え
	//falseがフェードイン
	fade_bool = false;
}

//フェードイン
void cFade::fadeIn()
{
	//じわじわ消す
	trans -= 0.01f;
}

//フェードアウト
void cFade::fadeOut()
{
	//じわじわ出す
	trans += 0.01f;

}
