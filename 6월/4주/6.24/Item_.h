#pragma once
#include "GameObject.h"
#include <iostream>  
using namespace std;

class Item_ : public GameObject
{
public:
    void Update() override {
        cout << "아이템 회전 중..." << endl;
    }
    void Render() override {
        cout << "아이템 렌더링" << endl;
    }
};

