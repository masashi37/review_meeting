#include "Text.h"

//�R���X�g���N�^
cText::cText()
	:font("res/font.ttf")
{
	angle = 0;
	sin = 0;
}

//�f�X�g���N�^
cText::~cText(){
}

//�G���^�[�L�[�������Ă�������
void cText::push_Enter(){
	font.size(60);

	//�ӂ�ӂ킳����
	angle += 0.05;
	sin = std::abs(std::sin(angle));

	//����
	font.draw("~Please Click!!~",
		Vec2f(-210, -200), Color(1, 1, 1,sin));
}