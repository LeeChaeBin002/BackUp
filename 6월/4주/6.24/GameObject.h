#pragma once
#include <iostream>  
using namespace std;
class GameObject
{
private:

public:
    virtual void Update() = 0;  // 순수 가상 함수
    virtual void Render() = 0; 
    virtual ~GameObject() = default;  // 가상 소멸자
};

