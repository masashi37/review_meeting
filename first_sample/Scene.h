
#pragma once

#include "Chara.h"


class cScene{

private:

	cChara chara;

	//��ʃX�C�b�`
	int scene_mover = 0;

	//��ʂ̌Ăі�
	enum{

		scene_max,
	};

public:

	cScene();

	void scene_update();
	void scene_draw();
	void scene_shift();

};


