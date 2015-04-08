
//
// 
//

#include "lib/defines.hpp"

#include "App.h"
#include "Scene.h"


//shared_ptrでAppEnvを作成
std::shared_ptr<AppEnv> app::app_env;


int main() {
	// アプリウインドウの準備
	app::app_env = std::make_shared<AppEnv>(WIDTH, HEIGHT, false, true);

	cScene scene;

	while (1) {
		// ウインドウが閉じるかエスケープで終了
		if (!app::app_env->isOpen()) return false;
		if (app::app_env->isPushKey(GLFW_KEY_ESCAPE)) return false;

		// 描画準備
		app::app_env->setupDraw();

		scene.scene_update();
		scene.scene_draw();
		scene.scene_shift();

		// 画面更新
		app::app_env->update();
	}

}
