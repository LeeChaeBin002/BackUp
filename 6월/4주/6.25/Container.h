#pragma once
#include "Container.h"
#include <iostream>
using namespace std;

const int MAX_ITEMS = 10;

template <typename T5>
class Container
{
private:
	T5 items[MAX_ITEMS];
	int count;
public:
	Container() : count(0) {}


	void add(const T5& item)
	{
		if (count < MAX_ITEMS)
		{
			items[count++] = item;
		}
		else
		{
			cout << "¾ÆÀÌÅÛÀÌ °¡µæ Ã¡½À´Ï´Ù!" << endl;
		}
	}

	void remove()
	{
		if (count > 0)
		{
			--count;
		}
	}
	void display() const
	{
		for (int i = 0; i < count; ++i)
		{
			cout << items[i] << " ";
		}
		cout << endl;
	}

};

