#ifndef MYSTRING_H  
#define MYSTRING_H  
#pragma once
#include <cstring>  
#include <iostream>  

class MyString {  
private:  
    char* data;  
    size_t length;  

public:  
    // 생성자 / 소멸자
    MyString();                                // 기본 생성자
    MyString(const char* str);                 // const char* 생성자
    MyString(const MyString& other);           // 복사 생성자
    ~MyString();                               // 소멸자

    // 대입 연산자
    MyString& operator=(const MyString& other);     // 복사 대입 연산자
    MyString& operator=(const char* str);           // const char* 대입

    //이동 대입 연산자
    MyString& operator=(MyString&& other);//r밸류,임시값 other

    // 멤버 함수
    size_t size() const;
    bool empty() const;
    void clear();
    void append(const char* str);
    void append(const MyString& other);
    const char* c_str() const;

    // 연산자 오버로딩
    char& operator[](size_t index);
    const char& operator[](size_t index) const;

    MyString operator+(const MyString& other) const;
    MyString operator+(const char* str) const;
    MyString& operator+=(const MyString& other);
    MyString& operator+=(const char* str);

    bool operator==(const MyString& other) const;
    bool operator==(const char* str) const;
    bool operator!=(const MyString& other) const;
    bool operator!=(const char* str) const;

    // 입출력 연산자
    friend std::ostream& operator<<(std::ostream& os, const MyString& str);
    friend std::istream& operator>>(std::istream& is, MyString& str);

};  

#endif