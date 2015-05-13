#include "scene.h"

//コンストラクタ
cScene::cScene()
{
	scene_sw = RPG;
	
}

//デストラクタ
cScene::~cScene()
{
}

//画面更新
void cScene::update()
{
	//画面ごとに切り替え
	switch (scene_sw)
	{
	case TITLE:
		Title.update();
		break;

	case MENU:
		Menu.update();
		break;

	case TRAINING:
		break;

	case RPG:
		rpg.update();
		break;
	}

	//作った処理を入れる
	cScene::change();
}

//描画
void cScene::draw()
{
	//画面ごとに切り替え
	switch (scene_sw)
	{
	case TITLE:
		Title.draw();
		break;

	case MENU:
		Menu.draw();
		break;

	case TRAINING:
		break;

	case RPG:
		rpg.draw();
		break;
	}
}

//画面を切り替える処理
void cScene::change()
{
	//画面ごとに切り替え
	switch (scene_sw)
	{
	case TITLE:

		//タイトル終了で画面切り替え
		if (Title.title_end_bool == true){
			scene_sw = MENU;
		}
		break;

	case MENU:
		scene_sw = Menu.change(scene_sw);
		break;
	}
}
