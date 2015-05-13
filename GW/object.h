#pragma once
#include "lib/defines.hpp"
#include "app.h"

//ウィンドウサイズ
enum Window{
	WIDTH = 800,
	HEIGHT = 600
};

//画像表示情報
struct Texture_info{
	
	//位置
	float pos_x;
	float pos_y;
	
	//サイズ
	float size_x;
	float size_y;
	
	//切り取り幅のはじめ
	float cut_start_x;
	float cut_start_y;

	//切り取り幅の終わり
	float cut_last_x;
	float cut_last_y;
};

//画面ごとに名前をつける
enum scene_name{
	TITLE,
	MENU,
	TRAINING,
	RPG,
	OPTION
};
