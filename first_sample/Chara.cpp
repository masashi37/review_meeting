
#include "Chara.h"

cChara::cChara() :
chara_img("res/player_img.png")
{

	chara = {
		0.0f, 0.0f, 150.0f, 100.0f,
		0, 0, 256, 128,
		2.0f,
	};

	is_left = false;

}

void cChara::move(){

	if (app::app_env->isPressKey('A')){
		is_left = true;
		chara.x -= chara.verocity;
	}
	if (app::app_env->isPressKey('D')){
		is_left = false;
		chara.x += chara.verocity;
	}
	if (app::app_env->isPressKey('S')){
		chara.y -= chara.verocity;
	}
	if (app::app_env->isPressKey('W')){
		chara.y += chara.verocity;
	}

}

void cChara::direction(){

	(is_left) ? chara.cut_y = 128 : chara.cut_y = 0;

}


void cChara::move_save(){

	if (chara.x < -WIDTH / 2)
		chara.x = -WIDTH / 2;
	if (chara.x + chara.width > WIDTH / 2)
		chara.x = WIDTH / 2 - chara.width;

	if (chara.y < -HEIGHT / 2)
		chara.y = -HEIGHT / 2;
	if (chara.y + chara.height > HEIGHT / 2)
		chara.y = HEIGHT / 2 - chara.height;

}


void cChara::draw(){

	app::app_env->bgColor(Color(1, 1, 1));

	drawTextureBox(chara.x, chara.y, chara.width, chara.height,
		chara.cut_x, chara.cut_y, chara.cut_width, chara.cut_height,
		chara_img, Color(1, 1, 1));

}