#pragma once
#include"lib/defines.hpp"
#include"app.h"
#include"object.h"

class cMenu{
	//�摜
	Texture back_pic;
public:
	//�R���X�g���N�^
	cMenu();
	//�f�X�g���N�^
	~cMenu();

	//��ʍX�V
	void update();
	//�`��
	void draw();
	//������
	void reset();
	//��ʐ؂�ւ�
	int change(int);

private:

	//�摜���
	Texture_info backs;
	//���j���[���
	Texture_info manus[3];
};