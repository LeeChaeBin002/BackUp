#pragma once
#include "Skill.h"
#include <iostream>
using namespace std;
class Heal : public Skill
{
private:
public:
    void Use() override {
        cout << "힐 사용! 체력을 40 회복했습니다." << endl;
    }
    int GetManaCost() override { return 20; }
    int GetCooldown() override { return 10; }
    string GetName() override { return "힐"; }


};
