
#pragma once

#include "object.h"
#include "RPGcommon.h"


class cRPG_Battle{

private:

	enum RPG_SceneDate{
		//�L�����̍ő吔
		CHARA_MAX_COUNT = 3,

		//�L�����T�C�Y
		CHARA_SIZE = 100,
		
		//�L�����ԕ�
		CHARA_SPACE_X = 125,
		CHARA_SPACE_Y = 50,
		
		//�X�e�[�^�X�̏c����
		CHARA_STATUS_WIDTH = 200,
		CHARA_STATUS_HEIGHT = 100,
		
		//�X�e�[�^�X�Ԃ̕�
		CHARA_STATUS_SPACE = 50,
		
		//�R�}���h�̏c����
		CHARA_COMMAND_WIDTH = 100,
		CHARA_COMMAND_HEIGHT = 300,
	};

	Texture_info back_field;						//�w�i
	Texture_info enemy[CHARA_MAX_COUNT];			//�G
	Texture_info myship[CHARA_MAX_COUNT];			//�e�L����
	Texture_info myship_status[CHARA_MAX_COUNT];	//�e�L�����̃X�e�[�^�X
	Texture_info command[CHARA_MAX_COUNT];			//�e�L�����̃R�}���h

public:

	cRPG_Battle();

	void update();
	void draw();
	void shift();

};