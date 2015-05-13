#include "lib/defines.hpp"
#include "app.h"
#include "scene.h"

std::shared_ptr<AppEnv> cApp::app_env;

//メインループ
int main(){
	
	//アプリウィンドウの準備
	cApp::app_env =
		std::make_shared<AppEnv>(WIDTH, HEIGHT, false, false);

	//置き換え
	cScene Scene;

	//処理
	while (cApp::app_env->isOpen())
{
	//個人的にEscでゲーム終了になれてる入れて置いた
	if (cApp::app_env->isPushKey(GLFW_KEY_ESCAPE))return 0;

		//描画準備
		cApp::app_env->setupDraw();

		//動くところ
		Scene.update();
		Scene.draw();

		//画面更新
		cApp::app_env->update();
	}
}