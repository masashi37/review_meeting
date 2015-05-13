#include"menu.h"

//コンストラクタ
cMenu::cMenu() :back_pic("res/menu_back.png")
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

	//メニュー
	manus[0] = {
		//位置
		-300, 50,
		//サイズ
		600, 150,
		//切り取り開始位置
		0, 0,
		//切り取り幅
		512, 512
	};
	manus[1] = {
		//位置
		-300, -150,
		//サイズ
		600, 150,
		//切り取り開始位置
		0, 0,
		//切り取り幅
		512, 512
	};
	manus[2] = {
		//位置
		-300, -350,
		//サイズ
		600, 150,
		//切り取り開始位置
		0, 0,
		//切り取り幅
		512, 512
	};
}

//デストラクタ
cMenu::~cMenu()
{
}

//画面更新
void cMenu::update()
{
}

//描画
void cMenu::draw()
{
	//背景
	drawTextureBox(backs.pos_x, backs.pos_y,
		backs.size_x, backs.size_y,
		backs.cut_start_x, backs.cut_start_y,
		backs.cut_last_x, backs.cut_last_y,
		back_pic, Color(1, 1, 1));

	for (int i = 0; i < 3; ++i){
		drawFillBox(manus[i].pos_x, manus[i].pos_y,
			manus[i].size_x, manus[i].size_y,
			Color(1, 1, 1));
	}
}

//初期化
void cMenu::reset()
{
}

//画面切り替え
int cMenu::change(int change_sw)
{
	if (cApp::app_env->isPushKey(GLFW_KEY_ENTER)){
		change_sw = MENU;
	}
	return change_sw;
}
