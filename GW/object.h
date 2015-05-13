#pragma once
#include "lib/defines.hpp"
#include "app.h"

//�E�B���h�E�T�C�Y
enum Window{
	WIDTH = 800,
	HEIGHT = 600
};

//�摜�\�����
struct Texture_info{
	
	//�ʒu
	float pos_x;
	float pos_y;
	
	//�T�C�Y
	float size_x;
	float size_y;
	
	//�؂��蕝�̂͂���
	float cut_start_x;
	float cut_start_y;

	//�؂��蕝�̏I���
	float cut_last_x;
	float cut_last_y;
};

//��ʂ��Ƃɖ��O������
enum scene_name{
	TITLE,
	MENU,
	TRAINING,
	RPG,
	OPTION
};
