#pragma once
#include"lib/defines.hpp"
#include"lib/font.hpp"
#include"app.h"

class cText{
public:

	//�t�H���g��ǂݍ���
	Font font;

	//�R���X�g���N�^
	cText();
	//�f�X�g���N�^
	~cText();

	//�G���^�[�L�[�������Ă�������
	void push_Enter();
private:

	//�ӂ�ӂ킳����ׂ̕ϐ�
	float angle;
	float sin;
};