#pragma once
#include "lib/defines.hpp"
#include "app.h"
#include "object.h"

class cHit{
public:
	//�_�Ǝl�p�̂����蔻��
	static bool clickJudgemnt(float& mouse_x, float& mous_y,
		float target_pos_x, float target_pos_y,
		float target_size_x, float target_size_y);
};
