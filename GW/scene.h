#pragma once
#include "lib/defines.hpp"
#include "app.h"
#include "object.h"

#include "title.h"
#include "menu.h"
#include "RPG.h"


class cScene{
public:

	//�R���X�g���N�^
	cScene();
	//�f�X�g���N�^
	~cScene();

	//��ʍX�V
	void update();
	//�`��
	void draw();

private:

	//��ʐ؂�ւ�
	void change();

	//��ʐ؂�ւ��X�C�b�`
	int scene_sw;

	//���̃w�b�_�[����ǂݍ���
	cTitle Title;
	cMenu Menu;
	cRPG rpg;
};
