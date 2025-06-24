#pragma once  
#include "GameObject.h"  
#include <iostream>  
using namespace std;  

class Player : public GameObject  
{  
public:  
    void Update() override {
        cout << "플레이어 이동 중..." << endl;
    }
    void Render() override {
        cout << "플레이어 렌더링" << endl;
    }
};