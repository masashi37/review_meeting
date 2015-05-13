#include "title.h"

//コンストラクタ
cTitle::cTitle() :back_pic("res/title_back.png")
{
	//背景画像情報
	backs = {
		//位置
		-WIDTH / 2, -HEIGHT / 2,
		//サイズ
		WIDTH, HEIGHT,
		//切り取り開始位置
		0, 0,
		//切り取り幅
		512, 512
	};

	//処理切り替え
	proce_sw = MUSIC_START;


	//タイトル終了判定
	title_end_bool = false;
}

//デストラクタ
cTitle::~cTitle()
{
}

//画面更新
void cTitle::update()
{
	//作った処理を入れる
	cTitle::change();
}

//描画
void cTitle::draw()
{
	//背景
	drawTextureBox(backs.pos_x, backs.pos_y,
		backs.size_x, backs.size_y,
		backs.cut_start_x, backs.cut_start_y,
		backs.cut_last_x, backs.cut_last_y,
		back_pic, Color(1, 1, 1));

	//テキスト
	Text.push_Enter();

	//フェード
	Fade.draw();
}

//初期化
void cTitle::Reset()
{
}

//画面切り替え
void cTitle::change()
{
	//処理切り替え
	switch (proce_sw)
	{
	case MUSIC_START:

		//曲を流して次の処理へ
		proce_sw = FADE_IN;

		break;
	case FADE_IN:

		//フェードイン開始
		Fade.fadeIn();

		//一定以上薄くなったら切り替え
		if (Fade.trans <= 0){
			proce_sw = BASIC;
		}
		break;

	case BASIC:

		//クリックしたら画面切り替え
		if (cApp::app_env->isPushButton(LEFT)){
			proce_sw = FADE_OUT;
		}

		break;
	case FADE_OUT:

		//フェードアウト開始
		Fade.fadeOut();

		//一定以上濃くなったら切り替え
		if (Fade.trans >= 1){

			//フェード初期化して切り替え
			Fade.reset();
			title_end_bool = true;
		}

		break;
	}
}
