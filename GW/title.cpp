#include "title.h"

//�R���X�g���N�^
cTitle::cTitle() :back_pic("res/title_back.png")
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

	//�����؂�ւ�
	proce_sw = MUSIC_START;


	//�^�C�g���I������
	title_end_bool = false;
}

//�f�X�g���N�^
cTitle::~cTitle()
{
}

//��ʍX�V
void cTitle::update()
{
	//���������������
	cTitle::change();
}

//�`��
void cTitle::draw()
{
	//�w�i
	drawTextureBox(backs.pos_x, backs.pos_y,
		backs.size_x, backs.size_y,
		backs.cut_start_x, backs.cut_start_y,
		backs.cut_last_x, backs.cut_last_y,
		back_pic, Color(1, 1, 1));

	//�e�L�X�g
	Text.push_Enter();

	//�t�F�[�h
	Fade.draw();
}

//������
void cTitle::Reset()
{
}

//��ʐ؂�ւ�
void cTitle::change()
{
	//�����؂�ւ�
	switch (proce_sw)
	{
	case MUSIC_START:

		//�Ȃ𗬂��Ď��̏�����
		proce_sw = FADE_IN;

		break;
	case FADE_IN:

		//�t�F�[�h�C���J�n
		Fade.fadeIn();

		//���ȏ㔖���Ȃ�����؂�ւ�
		if (Fade.trans <= 0){
			proce_sw = BASIC;
		}
		break;

	case BASIC:

		//�N���b�N�������ʐ؂�ւ�
		if (cApp::app_env->isPushButton(LEFT)){
			proce_sw = FADE_OUT;
		}

		break;
	case FADE_OUT:

		//�t�F�[�h�A�E�g�J�n
		Fade.fadeOut();

		//���ȏ�Z���Ȃ�����؂�ւ�
		if (Fade.trans >= 1){

			//�t�F�[�h���������Đ؂�ւ�
			Fade.reset();
			title_end_bool = true;
		}

		break;
	}
}
