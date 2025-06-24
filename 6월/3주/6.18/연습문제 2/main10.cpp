#include <iostream>
#include <string>
using namespace std;

void getItem(string name, int count = 1, int bonus = 0) 
{
	cout << "[È¹µæ] " << name
		<<count << "°³¸¦ È¹µæÇß½À´Ï´Ù!"
		<< "(º¸³Ê½º: " << bonus <<"Á¡)" << endl;
}

int main() 
{
	getItem("Æ÷¼Ç ");          
	getItem("È¸º¹¾à ", 5);          
	getItem("¿¤¸¯¼­ ", 3, 1000); 

}