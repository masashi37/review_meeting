#pragma once

#include "lib/defines.hpp"
#include "app.h"
#include "object.h"


class cFade{
	Texture fade_pic;
public:
	//�R���X�g���N�^
	cFade();
	//�f�X�g���N�^
	~cFade();

	//�`��
	void draw();
	//������
	void reset();

	//�t�F�[�h�C��
	void fadeIn();
	//�t�F�[�h�A�E�g
	void fadeOut();

	//�F
	float red;
	float green;
	float blue;

	//�A���t�@�l
	float trans;

private:

	//�t�F�[�h�؂�ւ�
	bool fade_bool;
};