
#pragma once

// アプリのウインドウサイズ
enum Window {
	WIDTH = 500,
	HEIGHT = 300
};


//描画データ
struct object{

	//表示
	float x, y;
	float width, height;

	//切り取り
	int cut_x, cut_y;
	int cut_width, cut_height;

	//速度
	float verocity;

};

//色
struct color{

	int red, green, blue;

	float alpha;

};