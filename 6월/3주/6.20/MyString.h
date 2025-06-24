#ifndef MYSTRING_H  
#define MYSTRING_H  

#include <cstring>  
#include <iostream>  

class MyString {  
private:  
    char* str;  
    size_t length;  

public:  
    // 기본 생성자  
    MyString() : str(nullptr), length(0) {}  

    // const char* 생성자  
    MyString(const char* s) {  
        if (s) {  
            length = std::strlen(s);  
            str = new char[length + 1];  
            std::strcpy(str, s);  
        } else {  
            str = nullptr;  
            length = 0;  
        }  
    }  

    // 복사 생성자  
    MyString(const MyString& other) {  
        length = other.length;  
        str = new char[length + 1];  
        std::strcpy(str, other.str);  
    }  

    // 대입 연산자  
    MyString& operator=(const MyString& other) {  
        if (this != &other) {  
            delete[] str;  
            length = other.length;  
            str = new char[length + 1];  
            std::strcpy(str, other.str);  
        }  
        return *this;  
    }  

    // 대입 연산자 (const char*)  
    MyString& operator=(const char* s) {  
        delete[] str;  
        if (s) {  
            length = std::strlen(s);  
            str = new char[length + 1];  
            std::strcpy(str, s);  
        } else {  
            str = nullptr;  
            length = 0;  
        }  
        return *this;  
    }  

    // 소멸자  
    ~MyString() {  
        delete[] str;  
    }  

    // 크기 반환  
    size_t size() const {  
        return length;  
    }  

    // 인덱스 접근  
    char& operator[](size_t index) {  
        return str[index];  
    }  

    const char& operator[](size_t index) const {  
        return str[index];  
    }  

    // 문자열 연결  
    MyString operator+(const MyString& other) const {  
        MyString result;  
        result.length = length + other.length;  
        result.str = new char[result.length + 1];  
        std::strcpy(result.str, str);  
        std::strcat(result.str, other.str);  
        return result;  
    }  

    // += 연산자  
    MyString& operator+=(const MyString& other) {  
        char* newStr = new char[length + other.length + 1];  
        std::strcpy(newStr, str);  
        std::strcat(newStr, other.str);  
        delete[] str;  
        str = newStr;  
        length += other.length;  
        return *this;  
    }  

    // 비교 연산자  
    bool operator==(const MyString& other) const {  
        return std::strcmp(str, other.str) == 0;  
    }  

    bool operator!=(const MyString& other) const {  
        return !(*this == other);  
    }  

    // append 메서드  
    void append(const MyString& other) {  
        *this += other;  
    }  

    // c_str() 메서드  
    const char* c_str() const {  
        return str;  
    }  

    // clear 메서드  
    void clear() {  
        delete[] str;  
        str = nullptr;  
        length = 0;  
    }  

    // empty 메서드  
    bool empty() const {  
        return length == 0;  
    }  

    // 입력 연산자  
    friend std::istream& operator>>(std::istream& is, MyString& s) {  
        char buffer[1024];  
        is >> buffer;  
        s = buffer;  
        return is;  
    }  

    // 출력 연산자  
    friend std::ostream& operator<<(std::ostream& os, const MyString& s) {  
        os << s.str;  
        return os;  
    }  
};  

#endif
