
#pragma once

#include "object.h"
#include "RPGcommon.h"


class cRPG_Battle{

private:

	enum RPG_SceneDate{
		//キャラの最大数
		CHARA_MAX_COUNT = 3,

		//キャラサイズ
		CHARA_SIZE = 100,
		
		//キャラ間幅
		CHARA_SPACE_X = 125,
		CHARA_SPACE_Y = 50,
		
		//ステータスの縦横幅
		CHARA_STATUS_WIDTH = 200,
		CHARA_STATUS_HEIGHT = 100,
		
		//ステータス間の幅
		CHARA_STATUS_SPACE = 50,
		
		//コマンドの縦横幅
		CHARA_COMMAND_WIDTH = 100,
		CHARA_COMMAND_HEIGHT = 300,
	};

	Texture_info back_field;						//背景
	Texture_info enemy[CHARA_MAX_COUNT];			//敵
	Texture_info myship[CHARA_MAX_COUNT];			//各キャラ
	Texture_info myship_status[CHARA_MAX_COUNT];	//各キャラのステータス
	Texture_info command[CHARA_MAX_COUNT];			//各キャラのコマンド

public:

	cRPG_Battle();

	void update();
	void draw();
	void shift();

};