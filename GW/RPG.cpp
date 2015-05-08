
#include "RPG.h"


cRPG::cRPG(){}


void cRPG::update(){

	battle.update();

}

void cRPG::draw(){

	battle.draw();

}

void cRPG::shift(){

	battle.shift();

}

