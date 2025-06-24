#pragma once
#include <string>
#include <iostream>
class Enemy
{
protected:
    std::string name;

public:
    Enemy(const std::string& name) : name(name) {
        std::cout << "좀비 생성 (총알: 10발)\n" << name << std::endl;
    }
    // 일반 소멸자 (virtual 붙여보기 전/후 비교)
    ~Enemy() {
        std::cout << "Enemy 소멸: " << name << std::endl;

        if (typeid(*this) != typeid(Enemy)) {
            std::cout << "경고: 가상 소멸자가 없어 Zombie 소멸자가 호출되지 않음!\n";
        }
    }

};

