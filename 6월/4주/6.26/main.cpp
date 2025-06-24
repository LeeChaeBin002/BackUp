#include <iostream>
#include <vector>

int main()
{

	std::vector<int> v1;
	std::vector<int> v2(5, 10);
	std::vector<int> v3 = { 1, 2, 3, 4, 5 };

	for (auto i : v3)
	{
		std::cout << i << std::endl;
	}


	return 0;
}