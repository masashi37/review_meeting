#include "Text.h"

//コンストラクタ
cText::cText()
	:font("res/font.ttf")
{
	angle = 0;
	sin = 0;
}

//デストラクタ
cText::~cText(){
}

//エンターキーを押してください
void cText::push_Enter(){
	font.size(60);

	//ふわふわさせる
	angle += 0.05;
	sin = std::abs(std::sin(angle));

	//文章
	font.draw("~Please Click!!~",
		Vec2f(-210, -200), Color(1, 1, 1,sin));
}