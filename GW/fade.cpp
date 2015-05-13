#include "fade.h"

//�R���X�g���N�^
cFade::cFade() : fade_pic("res/fade.png")
{
	//�F
	red = 0;
	green = 0;
	blue = 0;

	//�A���t�@�l
	trans = 1;

	//�t�F�[�h�؂�ւ�
	//false���t�F�[�h�C��
	fade_bool = false;
}

//�f�X�g���N�^
cFade::~cFade()
{
}

//�`��
void cFade::draw()
{
	//�t�F�[�h�摜
	drawTextureBox(-WIDTH / 2, -HEIGHT / 2,
		WIDTH, HEIGHT,
		0, 0, 512, 512,
		fade_pic, Color(red, green, blue, trans));
}

//������
void cFade::reset()
{
	//�F
	red = 0;
	green = 0;
	blue = 0;

	//�A���t�@�l
	trans = 1;

	//�t�F�[�h�؂�ւ�
	//false���t�F�[�h�C��
	fade_bool = false;
}

//�t�F�[�h�C��
void cFade::fadeIn()
{
	//���킶�����
	trans -= 0.01f;
}

//�t�F�[�h�A�E�g
void cFade::fadeOut()
{
	//���킶��o��
	trans += 0.01f;

}
