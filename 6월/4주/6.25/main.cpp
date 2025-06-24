#include <iostream>
#include <string>
#include "Pair.h"
#include "Container.h"
using namespace std;


template <typename T>
void findMinMax(const T* arr, int size, T& minVal, T& maxVal) {//배열가리킴,사이즈,최소,최대
    if (size <= 0) return;

    minVal = maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

template <typename T2>
void mySwap(T2& a, T2& b) {
    T2 temp = a;
    a = b;
    b = temp;
}

template <typename T3>
T3 average(const T3* arr, int size)
{
    if (size <= 0) return T3(); // 배열 크기가 0 이하일 경우 기본값 반환
    T3 sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum / size; // 평균 반환
}



int main() 
{   //1.
    int i_arr[] = { 1,2,3,4,5,6 };
    double d_arr[] = { 1.1,2.3,3.5,4.2 };
    char c_arr[] = { 'a','p','p','l','e'};
    int intMin, intMax;
    double doubleMin, doubleMax;
    char charMin, charMax;

    findMinMax(i_arr, 6, intMin, intMax);
    findMinMax(d_arr, 4, doubleMin, doubleMax);
    findMinMax(c_arr, 5, charMin, charMax);

    cout << "정수 배열: 최소 = " << intMin << ", 최대 = " << intMax << endl;
    cout << "실수 배열: 최소 = " << doubleMin << ", 최대 = " << doubleMax << endl;
    cout << "문자 배열: 최소 = " << charMin << ", 최대 = " << charMax << endl << endl;

    //2.

    int a = 10, b = 20;
    cout << "정수 교환전: a = " << a << ",b = " << b << endl;
    mySwap(a, b);
    cout << "정수 교환후: a = " << a << ",b = " << b << endl<<endl;

    double a_ = 10.5, b_ = 20.5;
    cout << "실수 교환전: a = " << a_ << ",b = " << b_ << endl;
    mySwap(a_, b_);
    cout << "실수 교환후: a = " << a_ << ",b = " << b_<< endl << endl;

    string s1 = "Hello", s2 = "World";
    cout << "문자열 교환전: s1 = " << s1 << ",s2 = " << s2 << endl;
    mySwap(s1, s2);
    cout << "문자열 교환후: s1 = " << s1 << ",s2 = " << s2 << endl << endl;

    //3.
   
    int arr[3] = { 4, 5, 6 };
    double arr_d[3] = { 4.5, 5.5, 6.5 };

    int intAvg = average(arr, 3); // 수정된 average 함수 호출
    double doubleAvg = average(arr_d, 3); // 실수 배열 평균 계산

    cout << "정수 배열 평균: " << intAvg << endl;
    cout << "실수 배열 평균: " << doubleAvg << endl;


    //4.
    Pair<string, int> student("Alice", 95);//생성자로 값을 초기화
    Pair<int, int> point(10, 20);
    Pair<string, int> kv("level", 30);

    cout << "학생 점수: (" << student.getFirst() << ", " << student.getSecond() << ")" << endl;//메서드 호출
    cout << "좌표: (" << point.getFirst() << ", " << point.getSecond() << ")" << endl;
    cout << "키-값: (" << kv.getFirst() << ", " << kv.getSecond() << ")" << endl<< endl;

    //5.
    Container<string> weapons;
    weapons.add("Sword");
    weapons.add("Shield");
    weapons.add("Bow");

    cout << "무기 목록: ";
    weapons.display();

    Container<int> potions;
    potions.add(100);
    potions.add(200);
    potions.add(50);

    cout << "포션 목록: ";
    potions.display();

    // 아이템 10개 넘게 추가해 보기
    for (int i = 0; i < 7; ++i) {
        potions.add(i * 10);
    }

    // 11번째 아이템 (초과)
    potions.add(999);  // 출력: 아이템이 가득 찼습니다!

    return 0;
}
    


