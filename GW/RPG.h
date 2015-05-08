
#pragma once

#include "object.h"
#include "RPGbattle.h"

class cRPG{

private:

	cRPG_Battle battle;

public:

	cRPG();

	void update();
	void draw();
	void shift();

};