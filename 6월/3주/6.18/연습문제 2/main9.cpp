#include <iostream>
#include <string>
using namespace std;

void attack(int damage) 
{
	cout << "단일 공격! 데미지:" << damage << endl;
}
void attack(int damage, int count)
{
	int total = damage * count;
	cout << "다중 공격!" << damage << "데미지로"
		<< count << "번 공격! 총 데미지: " << total << endl;
}
void attack(int damage, double critical)
{
	int total = static_cast<int>(damage * critical);
	cout << "크리티컬 공격! 기본데미지: " << damage
		<< ", 크리티컬 배율: " << critical
		<< "배,총 데미지: " << total << endl;
}

		

int main() 
{
	int d1, d2, c2,d3;
	double crit;

	cin >> d1;
	cin >> d2 >> c2;
	cin >> d3 >> crit; //크리티컬 공격

	attack(d1);
	attack(d2, c2);
	attack(d3, crit);

	return 0;
}