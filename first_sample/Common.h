
#pragma once

// �A�v���̃E�C���h�E�T�C�Y
enum Window {
	WIDTH = 500,
	HEIGHT = 300
};


//�`��f�[�^
struct object{

	//�\��
	float x, y;
	float width, height;

	//�؂���
	int cut_x, cut_y;
	int cut_width, cut_height;

	//���x
	float verocity;

};

//�F
struct color{

	int red, green, blue;

	float alpha;

};