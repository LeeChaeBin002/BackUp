#pragma once
#include "Enemy.h"
#include <iostream>
class Zombie :public Enemy
{
private:
    int* bullets;  // 동적 할당 자원 예시

public:
    Zombie(const std::string& name, int bcount)
        : Enemy(name), bullets(new int[bcount]) {
        std::cout << "좀비 생성 (총알: " << bcount << "발)\n";
    }

    ~Zombie() {
        std::cout << "Zombie 소멸: " << name << std::endl;
        delete[] bullets;
    }
   
};

