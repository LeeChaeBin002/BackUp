#pragma once
#include "GameObject.h"
#include <iostream>  
using namespace std;


class Enemy_ : public GameObject
{
public:
    void Update() override {
        cout << "적 AI 업데이트 중..." << endl;
    }
    void Render() override {
        cout << "적 렌더링" << endl;
    }
};

