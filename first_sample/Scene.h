
#pragma once

#include "Chara.h"


class cScene{

private:

	cChara chara;

	//画面スイッチ
	int scene_mover = 0;

	//画面の呼び名
	enum{

		scene_max,
	};

public:

	cScene();

	void scene_update();
	void scene_draw();
	void scene_shift();

};


