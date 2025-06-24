#include "MyString.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main() {
    // 1. 기본 생성자 테스트
    MyString s1;
    std::cout << "s1: " << s1 << "'', 길이: " << s1.size() << std::endl;

    // 2. const char* 생성자 테스트
    MyString s2("Hello");
    std::cout << "s2: '" << s2 << "', 길이: " << s2.size() << std::endl;

    // 3. 복사 생성자 테스트
    MyString s3(s2);
    std::cout << "s3: '" << s3 << "', 길이: " << s3.size() << std::endl;
    
    // 4-0. 이동 생성자 테스트
    MyString s4(std::move(MyString("World")));
    std::cout << "s4: '" << s4 << "', 길이: " << s4.size() << std::endl;

    // 4. 대입 연산자 테스트
    s1 = s2;
    std::cout << "s1 = s2 후: '" << s1 << "'" << std::endl;


    // 5. 자기 대입 테스트
    s1 = s1;
    std::cout << "자기 대입 후: '" << s1 << "'" << std::endl;

    // 6. 이동 대입 테스트
    s1 = std::move(MyString("move test"));
    std::cout << "이동 대입 후: '" << s1 << "'" << std::endl;

    // 7. 인덱스 접근 테스트
    s2[0] = 'h';
    std::cout << "s2[0] = 'h' 후: '" << s2 << "'" << std::endl;

    // 8. 문자열 연결 테스트
    MyString s4_("World");
    MyString s5 = s2 + " " + s4_;
    std::cout << "s2 + \" \" + s4_: '" << s5 << "'" << std::endl;

    // 9. += 연산자 테스트
    s5 += "!";
    std::cout << "+= \"!\" 후: '" << s5 << "'" << std::endl;

    // 10. 비교 연산자 테스트
    std::cout << "s2 == \"hello\": " << (s2 == "hello") << std::endl;
    std::cout << "s2 != s3: " << (s2 != s3) << std::endl;

    // 11. append 테스트
    s1.clear();
    s1.append("First");//new data
    s1.append(" ");//length + addLen + 1
    s1.append(MyString("Second"));//
    std::cout << "append 후: '" << s1 << "'" << std::endl;

    // 12. c_str() 테스트
    const char* cstr = s1.c_str();
    std::cout << "c_str(): " << cstr << std::endl;

    // 13. empty() 테스트
    MyString s6;
    std::cout << "s6.empty(): " << s6.empty() << std::endl;
    s6 = "Not empty";
    std::cout << "대입 후 s6.empty(): " << s6.empty() << std::endl;

    // 14. 대량 문자열 테스트
    MyString s7;
    for (int i = 0; i < 100; ++i) {
        s7 += "a";
    }
    std::cout << "100개 'a' 추가 후 길이: " << s7.size() << std::endl;

    // 15. const 객체 테스트
    const MyString s8("Const String");
    std::cout << "const 객체: '" << s8 << "'" << std::endl;
    std::cout << "const 객체 인덱스 접근: " << s8[0] << std::endl;

    // 16. 입력 연산자 테스트
    std::cout << "\n=== 입력 연산자 테스트 ===" << std::endl;
    std::cout << "세 단어를 입력하세요: ";
    MyString s9, s10, s11;
    std::cin >> s9 >> s10 >> s11;
    std::cout << "입력된 문자열: '" << s9 << "', '" << s10 << "', '" << s11 << "'" << std::endl;

    return 0;
}

