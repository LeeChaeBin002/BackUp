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
			throw ("����ġ�� ������ �� �����ϴ�:" + to_string(amount));
		if (level >= Max_level)
			throw ("�ִ� ����(" + to_string(Max_level) + ")�� �����߽��ϴ�!");

		exp += amount;

		// ������ ó��
		while (exp >= Max_level && level < Max_exp) {
			exp -= Max_level;
			level++;
			cout << "������ ����! ���� ����: " << level << endl;

			if (level == Max_level)
				throw runtime_error("�ִ� ����(" + to_string(Max_level) + ")�� �����߽��ϴ�!");
		}
	}
};

#endif