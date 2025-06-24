#include <iostream>  
using namespace std;  
#pragma once  
class Weapon  
{  
private:  

public:  
	Weapon() {  
		cout << "Weapon 생성자" << endl;  
	}  
	virtual ~Weapon() { // 소멸자는 virtual로 선언 
		cout << "Weapon 소멸자" << endl;  
	}  
};
