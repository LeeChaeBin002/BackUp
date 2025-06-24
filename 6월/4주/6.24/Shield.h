#pragma once
#include "Skill.h"
#include <iostream>
using namespace std;
class Shield : public Skill
{
private:

public:
    void Use() override {
        cout << "실드 사용! 10초간 방어력이 상승합니다." << endl;
    }
    int GetManaCost() override { return 40; }
    int GetCooldown() override { return 15; }
    string GetName() override { return "실드"; }


};
