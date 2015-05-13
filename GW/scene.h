#pragma once
#include "lib/defines.hpp"
#include "app.h"
#include "object.h"

#include "title.h"
#include "menu.h"
#include "RPG.h"


class cScene{
public:

	//コンストラクタ
	cScene();
	//デストラクタ
	~cScene();

	//画面更新
	void update();
	//描画
	void draw();

private:

	//画面切り替え
	void change();

	//画面切り替えスイッチ
	int scene_sw;

	//他のヘッダーから読み込む
	cTitle Title;
	cMenu Menu;
	cRPG rpg;
};
