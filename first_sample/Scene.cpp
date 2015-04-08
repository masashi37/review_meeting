
#include "Scene.h"


cScene::cScene(){

};


void cScene::scene_update(){

	chara.move();
	chara.move_save();
	chara.direction();
}

void cScene::scene_draw(){

	chara.draw();

}

void cScene::scene_shift(){

}