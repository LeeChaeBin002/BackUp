#pragma once
#ifndef STUDENT_H  
#define STUDENT_H 
#include <iostream>
using namespace std;


class Student
{
    string name;
    int id;
    int number; // 생성 순서 (1,2,3)

public:
    // 생성자
    Student(int id, const string& name, int number)
        : id(id), name(name), number(number) {
        cout << "학생 " << number << " 생성됨" << endl;
    }

    // 소멸자
    ~Student() {
        cout << "학생 " << number << " 소멸됨" << endl;
    }

    // 정보 출력 메서드
    void printInfo() const {
        cout << "학번: " << id << ", 이름: " << name << endl;
    }
};



#endif
