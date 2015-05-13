#include"menu.h"

//�R���X�g���N�^
cMenu::cMenu() :back_pic("res/menu_back.png")
{
	//�w�i�摜���
	backs = {
		//�ʒu
		-WIDTH / 2, -HEIGHT / 2,
		//�T�C�Y
		WIDTH, HEIGHT,
		//�؂���J�n�ʒu
		0, 0,
		//�؂��蕝
		512, 512
	};

	//���j���[
	manus[0] = {
		//�ʒu
		-300, 50,
		//�T�C�Y
		600, 150,
		//�؂���J�n�ʒu
		0, 0,
		//�؂��蕝
		512, 512
	};
	manus[1] = {
		//�ʒu
		-300, -150,
		//�T�C�Y
		600, 150,
		//�؂���J�n�ʒu
		0, 0,
		//�؂��蕝
		512, 512
	};
	manus[2] = {
		//�ʒu
		-300, -350,
		//�T�C�Y
		600, 150,
		//�؂���J�n�ʒu
		0, 0,
		//�؂��蕝
		512, 512
	};
}

//�f�X�g���N�^
cMenu::~cMenu()
{
}

//��ʍX�V
void cMenu::update()
{
}

//�`��
void cMenu::draw()
{
	//�w�i
	drawTextureBox(backs.pos_x, backs.pos_y,
		backs.size_x, backs.size_y,
		backs.cut_start_x, backs.cut_start_y,
		backs.cut_last_x, backs.cut_last_y,
		back_pic, Color(1, 1, 1));

	for (int i = 0; i < 3; ++i){
		drawFillBox(manus[i].pos_x, manus[i].pos_y,
			manus[i].size_x, manus[i].size_y,
			Color(1, 1, 1));
	}
}

//������
void cMenu::reset()
{
}

//��ʐ؂�ւ�
int cMenu::change(int change_sw)
{
	if (cApp::app_env->isPushKey(GLFW_KEY_ENTER)){
		change_sw = MENU;
	}
	return change_sw;
}
