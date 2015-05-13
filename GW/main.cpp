#include "lib/defines.hpp"
#include "app.h"
#include "scene.h"

std::shared_ptr<AppEnv> cApp::app_env;

//���C�����[�v
int main(){
	
	//�A�v���E�B���h�E�̏���
	cApp::app_env =
		std::make_shared<AppEnv>(WIDTH, HEIGHT, false, false);

	//�u������
	cScene Scene;

	//����
	while (cApp::app_env->isOpen())
{
	//�l�I��Esc�ŃQ�[���I���ɂȂ�Ă����Ēu����
	if (cApp::app_env->isPushKey(GLFW_KEY_ESCAPE))return 0;

		//�`�揀��
		cApp::app_env->setupDraw();

		//�����Ƃ���
		Scene.update();
		Scene.draw();

		//��ʍX�V
		cApp::app_env->update();
	}
}