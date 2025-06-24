#pragma once
#include <iostream>
using namespace std;

class Item
    {
        string name;
        int price;

    public:
        // 생성자
        Item(const string& name, int price)
            :name(name), price(price) {
        }
        int getPrice() const {
            return price;
        }

        void printInfo(int index) const {
            cout << "아이템 " << index + 1 << " 추가: " << name << " " << price << endl;
        }
    };

    int size;
    cout << "인벤토리 크기: ";
    cin >> size;

    // 동적 배열 생성
    Item** inventory = new Item * [size];

    // 아이템 추가
    for (int i = 0; i < size; ++i) {
        string name;
        int price;
        cout <<"아이템 " << i + 1 << " 추가: ";
        cin >> name >> price;
        inventory[i] = new Item(name, price);
    }

    // 총 가치 계산
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += inventory[i]->getPrice();
    }

    cout << "총 가치: " << total << endl;

    // 메모리 해제
    for (int i = 0; i < size; ++i) {
        delete inventory[i];
    }
    delete[] inventory;

    cout << "인벤토리 정리 완료" << endl;

};

