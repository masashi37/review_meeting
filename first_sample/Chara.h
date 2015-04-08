
#pragma once

#include "App.h"

#include "Common.h"


class cChara{

private:

	Texture chara_img;

	object chara;

	bool is_left;

public:

	cChara();

	void move();
	void move_save();
	void direction();

	void draw();

};