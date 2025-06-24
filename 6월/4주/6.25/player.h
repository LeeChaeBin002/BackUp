#pragma once
#ifndef Player_H  
#define Player_H
#include <iostream>
#include <stdexcept>  
#include <string>
#include "player.h"

using namespace std;

class player
{
private:
	int level;
	int exp;
	static const int Max_level = 99;
	static const int Max_exp = 100;


public:
	player():level(1),exp(0){}

	void gainExp(int amount)
	{
		if (amount <= 0)
			throw ("경험치는 음수일 수 없습니다:" + to_string(amount));
		if (level >= Max_level)
			throw ("최대 레벨(" + to_string(Max_level) + ")에 도달했습니다!");

		exp += amount;

		// 레벨업 처리
		while (exp >= Max_level && level < Max_exp) {
			exp -= Max_level;
			level++;
			cout << "레벨업 성공! 현재 레벨: " << level << endl;

			if (level == Max_level)
				throw runtime_error("최대 레벨(" + to_string(Max_level) + ")에 도달했습니다!");
		}
	}
};

#endif