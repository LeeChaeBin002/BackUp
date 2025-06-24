#include <iostream>
#include "Vector2.h"

int main()
{
	Vector2 vec1(10.f, 10.f);
	Vector2 vec2(20.f, 20.f);


	//(vec1 + vec2).print(); // (30, 30)
	//(vec1 - vec2).print(); // (-10.0, -10.0)
	//(vec1 * 10.f).print(); // (100.0, 100.0)
	//(10.f * vec1).print(); // (100.0, 100.0)

	Vector2 ret = 10.f * vec1;
	std::cout << ret << std::endl;

	return 0;
}