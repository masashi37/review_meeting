
#pragma once


//キャラのステータス
struct charaStatus{

	int hp;				//体力
	int power;			//攻撃力
	int defense;		//防御力
	int speed;			//速度

	int atack_turn;		//攻撃順(0～(攻撃順に)5まで)
	bool is_atack;		//攻撃フェーズ攻撃可能か？

	int type;			//属性

};

//キャラに関するツール
class charaTool{

public:

	//与えるダメージの計算
	void getDamage(
		int& hp, int& prezent_damage, int& guard, int add_up_damage){

		add_up_damage = prezent_damage - guard;
		if ((prezent_damage - guard) < 0)add_up_damage = 0;

		hp -= add_up_damage;

	}

	//攻撃順を決めるソート計算
	void atack_turn(int chara_speed[6], int speed[6],
		int& turn0, int& turn1, int& turn2, int& turn3, int& turn4, int& turn5){

		if (chara_speed[0] > chara_speed[1]){
			speed[0] = chara_speed[0];
			speed[1] = chara_speed[1];

			if (chara_speed[2] > chara_speed[0]){
				speed[0] = chara_speed[2];
				speed[1] = chara_speed[0];
				speed[2] = chara_speed[1];
			}
		}
		else if (chara_speed[1] > chara_speed[0]){
			speed[0] = chara_speed[1];
			speed[1] = chara_speed[0];

			if (chara_speed[2] > chara_speed[1]){
				speed[0] = chara_speed[2];
				speed[1] = chara_speed[1];
				speed[2] = chara_speed[0];
			}
			else if (chara_speed[1] > chara_speed[2]){

				if (chara_speed[0] > chara_speed[2]){
					speed[1] = chara_speed[0];
					speed[2] = chara_speed[2];
				}
				else if (chara_speed[2] > chara_speed[0]){
					speed[1] = chara_speed[2];
					speed[2] = chara_speed[0];

				}
			}
		}

		if (chara_speed[3] > chara_speed[4]){
			speed[3] = chara_speed[3];
			speed[4] = chara_speed[4];

			if (chara_speed[5] > chara_speed[3]){
				speed[3] = chara_speed[5];
				speed[4] = chara_speed[3];
				speed[5] = chara_speed[4];
			}
		}
		else if (chara_speed[4] > chara_speed[3]){
			speed[3] = chara_speed[4];
			speed[4] = chara_speed[3];

			if (chara_speed[5] > chara_speed[4]){
				speed[3] = chara_speed[5];
				speed[4] = chara_speed[4];
				speed[5] = chara_speed[3];
			}
			else if (chara_speed[4] > chara_speed[5]){

				if (chara_speed[3] > chara_speed[5]){
					speed[4] = chara_speed[3];
					speed[5] = chara_speed[5];
				}
				else if (chara_speed[5] > chara_speed[3]){
					speed[4] = chara_speed[5];
					speed[5] = chara_speed[3];

				}
			}
		}


		for (int i = 0; i < 10; ++i){
			if (speed[2] < speed[3])
				std::swap(speed[2], speed[3]);

			if (speed[2] > speed[0])
				std::swap(speed[2], speed[0]);
			else if (speed[2] > speed[1])
				std::swap(speed[2], speed[1]);

			if (speed[3] < speed[5])
				std::swap(speed[3], speed[5]);
			else if (speed[3] < speed[4])
				std::swap(speed[3], speed[4]);
		}


		if (chara_speed[0] == speed[0])turn0 = 0;
		else if (chara_speed[0] == speed[1])turn0 = 1;
		else if (chara_speed[0] == speed[2])turn0 = 2;
		else if (chara_speed[0] == speed[3])turn0 = 3;
		else if (chara_speed[0] == speed[4])turn0 = 4;
		else if (chara_speed[0] == speed[5])turn0 = 5;

		if (chara_speed[1] == speed[0])turn1 = 0;
		else if (chara_speed[1] == speed[1])turn1 = 1;
		else if (chara_speed[1] == speed[2])turn1 = 2;
		else if (chara_speed[1] == speed[3])turn1 = 3;
		else if (chara_speed[1] == speed[4])turn1 = 4;
		else if (chara_speed[1] == speed[5])turn1 = 5;

		if (chara_speed[2] == speed[0])turn2 = 0;
		else if (chara_speed[2] == speed[1])turn2 = 1;
		else if (chara_speed[2] == speed[2])turn2 = 2;
		else if (chara_speed[2] == speed[3])turn2 = 3;
		else if (chara_speed[2] == speed[4])turn2 = 4;
		else if (chara_speed[2] == speed[5])turn2 = 5;

		if (chara_speed[3] == speed[0])turn3 = 0;
		else if (chara_speed[3] == speed[1])turn3 = 1;
		else if (chara_speed[3] == speed[2])turn3 = 2;
		else if (chara_speed[3] == speed[3])turn3 = 3;
		else if (chara_speed[3] == speed[4])turn3 = 4;
		else if (chara_speed[3] == speed[5])turn3 = 5;

		if (chara_speed[4] == speed[0])turn4 = 0;
		else if (chara_speed[4] == speed[1])turn4 = 1;
		else if (chara_speed[4] == speed[2])turn4 = 2;
		else if (chara_speed[4] == speed[3])turn4 = 3;
		else if (chara_speed[4] == speed[4])turn4 = 4;
		else if (chara_speed[4] == speed[5])turn4 = 5;

		if (chara_speed[5] == speed[0])turn5 = 0;
		else if (chara_speed[5] == speed[1])turn5 = 1;
		else if (chara_speed[5] == speed[2])turn5 = 2;
		else if (chara_speed[5] == speed[3])turn5 = 3;
		else if (chara_speed[5] == speed[4])turn5 = 4;
		else if (chara_speed[5] == speed[5])turn5 = 5;

	}

};