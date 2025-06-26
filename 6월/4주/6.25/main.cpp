#include <iostream>
#include <string>
#include "Pair.h"
#include "Container.h"
using namespace std;


template <typename T>
void findMinMax(const T* arr, int size, T& minVal, T& maxVal) {//�迭����Ŵ,������,�ּ�,�ִ�
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
    if (size <= 0) return T3(); // �迭 ũ�Ⱑ 0 ������ ��� �⺻�� ��ȯ
    T3 sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum / size; // ��� ��ȯ
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

    cout << "���� �迭: �ּ� = " << intMin << ", �ִ� = " << intMax << endl;
    cout << "�Ǽ� �迭: �ּ� = " << doubleMin << ", �ִ� = " << doubleMax << endl;
    cout << "���� �迭: �ּ� = " << charMin << ", �ִ� = " << charMax << endl << endl;

    //2.

    int a = 10, b = 20;
    cout << "���� ��ȯ��: a = " << a << ",b = " << b << endl;
    mySwap(a, b);
    cout << "���� ��ȯ��: a = " << a << ",b = " << b << endl<<endl;

    double a_ = 10.5, b_ = 20.5;
    cout << "�Ǽ� ��ȯ��: a = " << a_ << ",b = " << b_ << endl;
    mySwap(a_, b_);
    cout << "�Ǽ� ��ȯ��: a = " << a_ << ",b = " << b_<< endl << endl;

    string s1 = "Hello", s2 = "World";
    cout << "���ڿ� ��ȯ��: s1 = " << s1 << ",s2 = " << s2 << endl;
    mySwap(s1, s2);
    cout << "���ڿ� ��ȯ��: s1 = " << s1 << ",s2 = " << s2 << endl << endl;

    //3.
   
    int arr[3] = { 4, 5, 6 };
    double arr_d[3] = { 4.5, 5.5, 6.5 };

    int intAvg = average(arr, 3); // ������ average �Լ� ȣ��
    double doubleAvg = average(arr_d, 3); // �Ǽ� �迭 ��� ���

    cout << "���� �迭 ���: " << intAvg << endl;
    cout << "�Ǽ� �迭 ���: " << doubleAvg << endl;


    //4.
    Pair<string, int> student("Alice", 95);//�����ڷ� ���� �ʱ�ȭ
    Pair<int, int> point(10, 20);
    Pair<string, int> kv("level", 30);

    cout << "�л� ����: (" << student.getFirst() << ", " << student.getSecond() << ")" << endl;//�޼��� ȣ��
    cout << "��ǥ: (" << point.getFirst() << ", " << point.getSecond() << ")" << endl;
    cout << "Ű-��: (" << kv.getFirst() << ", " << kv.getSecond() << ")" << endl<< endl;

    //5.
    Container<string> weapons;
    weapons.add("Sword");
    weapons.add("Shield");
    weapons.add("Bow");

    cout << "���� ���: ";
    weapons.display();

    Container<int> potions;
    potions.add(100);
    potions.add(200);
    potions.add(50);

    cout << "���� ���: ";
    potions.display();

    // ������ 10�� �Ѱ� �߰��� ����
    for (int i = 0; i < 7; ++i) {
        potions.add(i * 10);
    }

    // 11��° ������ (�ʰ�)
    potions.add(999);  // ���: �������� ���� á���ϴ�!

    return 0;
}
    


