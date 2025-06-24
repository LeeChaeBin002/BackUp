#include "MyString.h"

// 기본 생성자
MyString::MyString() : data(new char[1] {'\0'}), length(0) {}

// const char* 생성자
MyString::MyString(const char* str)
{
	if (str)
	{
		length = std::strlen(str);
		data = new char[length + 1];
		strcpy_s(data, length + 1, str); // 안전한 strcpy_s 사용
	}
	else
	{
		data = new char[1] {'\0'};
		length = 0;
	}
}
// 복사 생성자
MyString::MyString(const MyString& other) : length(other.length) {
	data = new char[length + 1];
	strcpy_s(data, length + 1, other.data);
}
// 소멸자
MyString::~MyString() {
    delete[] data;
}

// 복사 대입 연산자
MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        delete[] data;
        length = other.length;
        data = new char[length + 1];
        strcpy_s(data, length + 1, other.data);
    }
    return *this;
}
//이동 대입 연산자
MyString& MyString::operator=(MyString&& other) {
    if (this != &other) {
        delete[] data;
        data = other.data;// 포인터만 복사 (빠름!)
        length = other.length; // 길이 복사

        other.data = nullptr;// 자원 원본 제거 (중복 해제 방지)
        other.length = 0;// 안전 초기화
    }
    return *this;
}

// const char* 대입
MyString& MyString::operator=(const char* str) {
    if (data != str) { // 자기 자신에 대한 대입 방지
        delete[] data; // 기존 메모리 해제

        length = std::strlen(str); // 새로운 문자열 길이 계산
        data = new char[length + 1]; // 새로운 메모리 할당

        // 안전한 문자열 복사 사용
        strcpy_s(data, length + 1, str);
    }
    return *this;
}

// size() 함수
size_t MyString::size() const {
    return length;
}

// empty()
bool MyString::empty() const {
    return length == 0;
}

// clear()
void MyString::clear() {
    delete[] data;
    data = new char[1] {'\0'};
    length = 0;
}

// append
void MyString::append(const char* str) {
    if (!str) return;
    size_t addLen = std::strlen(str);
    char* newData = new char[length + addLen + 1];
    strcpy_s(newData, length + addLen + 1, data);//기존 문자열 (data)를 newData에 복사
    strcat_s(newData, length + addLen + 1, str);//이어서 str를 newData 끝에 붙임 (즉, 이어붙이기)
    delete[] data;
    data = newData;
    length += addLen;
}

void MyString::append(const MyString& other) {
    append(other.data);
}

// c_str
const char* MyString::c_str() const {
    return data;
}

// 인덱스 접근
char& MyString::operator[](size_t index) {
    return data[index];
}
const char& MyString::operator[](size_t index) const {
    return data[index];
}

// + 연산자
MyString MyString::operator+(const MyString& other) const {//s4_
    MyString temp(*this);
    temp.append(other.data);
    return temp;
}
MyString MyString::operator+(const char* str) const { // s2+" "
    MyString temp(*this);
    temp.append(str);
    return temp;
}

// += 연산자
MyString& MyString::operator+=(const MyString& other) {
    append(other.data);
    return *this;
}
MyString& MyString::operator+=(const char* str) {
    append(str);
    return *this;
}

// 비교 연산자
bool MyString::operator==(const MyString& other) const {
    return std::strcmp(data, other.data) == 0;
}
bool MyString::operator==(const char* str) const {
    return std::strcmp(data, str) == 0;
}
bool MyString::operator!=(const MyString& other) const {
    return !(*this == other);
}
bool MyString::operator!=(const char* str) const {
    return !(*this == str);
}

// 출력 연산자
std::ostream& operator<<(std::ostream& os, const MyString& str) {
    if (str.data) {
        os << str.data; // Accessing private member 'data' of MyString
    }
    return os;
}

// 입력 연산자
std::istream& operator>>(std::istream& is, MyString& str) {
    char buffer[1000];
    is >> buffer;
    str = buffer;
    return is;
}