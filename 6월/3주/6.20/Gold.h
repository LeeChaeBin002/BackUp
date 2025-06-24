#pragma once
#ifndef GOLD_H
#define GOLD_H
#include <iostream>

class Gold
{
private:
    int amount;

public:
    Gold(int amount = 0);

    // 연산자 오버로딩
    Gold operator+(const Gold& other) const;
    Gold operator-(const Gold& other) const;
    Gold& operator+=(int value);

    bool operator>(const Gold& other) const;
    bool operator<(const Gold& other) const;

    // 출력 연산자
    friend std::ostream& operator<<(std::ostream& os, const Gold& gold);
};

#endif;
