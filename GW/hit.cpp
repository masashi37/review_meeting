#include "Hit.h"

bool cHit::clickJudgemnt(float& mouse_x, float& mouse_y,
	float target_pos_x, float target_pos_y,
	float target_size_x,float target_size_y){

	if (mouse_x >= target_pos_x){
		if (mouse_x <= target_pos_x + target_size_x){
			if (mouse_y >= target_pos_y){
				if (mouse_y <= target_pos_y + target_size_y){
					return true;
				}
			}
		}
	}
	return false;
}