#include "scene.h"

//�R���X�g���N�^
cScene::cScene()
{
	scene_sw = RPG;
	
}

//�f�X�g���N�^
cScene::~cScene()
{
}

//��ʍX�V
void cScene::update()
{
	//��ʂ��Ƃɐ؂�ւ�
	switch (scene_sw)
	{
	case TITLE:
		Title.update();
		break;

	case MENU:
		Menu.update();
		break;

	case TRAINING:
		break;

	case RPG:
		rpg.update();
		break;
	}

	//���������������
	cScene::change();
}

//�`��
void cScene::draw()
{
	//��ʂ��Ƃɐ؂�ւ�
	switch (scene_sw)
	{
	case TITLE:
		Title.draw();
		break;

	case MENU:
		Menu.draw();
		break;

	case TRAINING:
		break;

	case RPG:
		rpg.draw();
		break;
	}
}

//��ʂ�؂�ւ��鏈��
void cScene::change()
{
	//��ʂ��Ƃɐ؂�ւ�
	switch (scene_sw)
	{
	case TITLE:

		//�^�C�g���I���ŉ�ʐ؂�ւ�
		if (Title.title_end_bool == true){
			scene_sw = MENU;
		}
		break;

	case MENU:
		scene_sw = Menu.change(scene_sw);
		break;
	}
}
