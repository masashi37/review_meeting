#pragma once
#include "lib/defines.hpp"
#include "app.h"
#include "text.h"
#include "fade.h"
#include "object.h"

class cTitle{
	//�摜
	Texture back_pic;
public:
	//�R���X�g���N�^
	cTitle();
	//�f�X�g���N�^
	~cTitle();

	//��ʍX�V
	void update();
	//�`��
	void draw();
	//������
	void Reset();

	//�^�C�g���I������
	bool title_end_bool;

private:

	//�^�C�g�����ł̉�ʐ؂�ւ�
	void change();

	//����
	int proce_sw;

	//�e�L�X�g�N���X�ǂݍ���
	cText Text;
	//�t�F�[�h�N���X�ǂݍ���
	cFade Fade;

	//�摜���
	Texture_info backs;

	//�����̐؂�ւ��i�^�C�g�����ł́j
	enum proce_name{
		MUSIC_START,
		FADE_IN,
		BASIC,
		FADE_OUT,
	};
};