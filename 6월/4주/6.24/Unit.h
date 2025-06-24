#pragma once
#include <iostream>

class Unit
{
protected:
	int x, y;

public:
	Unit(int x = 0, int y = 0);
	virtual ~Unit() = default;

	virtual void Move(int dx, int dy);
	void PrintPosition() const;

};

