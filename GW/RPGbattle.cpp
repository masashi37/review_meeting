
#include "RPGbattle.h"


cRPG_Battle::cRPG_Battle(){

	back_field = {
		-WIDTH / 2, -HEIGHT / 2, WIDTH, HEIGHT,
	};

	for (int i = 0; i < CHARA_MAX_COUNT; ++i){

		enemy[i] = {
			-WIDTH / 2 + CHARA_SPACE_X + (CHARA_SIZE + CHARA_SPACE_X) * i,
			HEIGHT / 2 - CHARA_SIZE - CHARA_SPACE_Y,
			CHARA_SIZE,
			CHARA_SIZE,
		};

		myship[i] = {
			-WIDTH / 2 + CHARA_SPACE_X + (CHARA_SIZE + CHARA_SPACE_X) * i,
			-HEIGHT / 2 + CHARA_SPACE_Y * 2,
			CHARA_SIZE,
			CHARA_SIZE,
		};

		myship_status[i] = {
			-WIDTH / 2 + CHARA_STATUS_SPACE + 
			(CHARA_STATUS_WIDTH + CHARA_STATUS_SPACE) * i,
			
			-HEIGHT / 2,
			CHARA_STATUS_WIDTH,
			CHARA_STATUS_HEIGHT,
		};

	}
	/*
	command[0] = {
	0, 0, CHARA_COMMAND_WIDTH, CHARA_COMMAND_HEIGHT,
	};*/

}


void cRPG_Battle::update(){}

void cRPG_Battle::draw(){

	//背景
	drawFillBox(
		back_field.pos_x, back_field.pos_y,
		back_field.size_x, back_field.size_y,
		Color(0, 0, 0));

	for (int i = 0; i < CHARA_MAX_COUNT; ++i){

		//敵
		drawFillBox(
			enemy[i].pos_x, enemy[i].pos_y,
			enemy[i].size_x, enemy[i].size_y,
			Color(1, 0, 0));

		//自機
		drawFillBox(
			myship[i].pos_x, myship[i].pos_y,
			myship[i].size_x, myship[i].size_y,
			Color(0, 1, 0));
		//自機ステータス
		drawFillBox(
			myship_status[i].pos_x, myship_status[i].pos_y,
			myship_status[i].size_x, myship_status[i].size_y,
			Color(1, 1, 0));
		//自機のコマンド
		drawFillBox(
			command[i].pos_x, command[i].pos_y,
			command[i].size_x, command[i].size_y,
			Color(0, 0, 1));

	}

}

void cRPG_Battle::shift(){}

