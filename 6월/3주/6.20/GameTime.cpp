#include "GameTime.h"
#include <iostream>

// 생성자
GameTime::GameTime(int minutes) : totalMinutes(minutes) {}

// 비교 연산자 구현
bool GameTime::operator>(const GameTime& other) const {
    return totalMinutes > other.totalMinutes;
}

bool GameTime::operator<(const GameTime& other) const {
    return totalMinutes < other.totalMinutes;
}

bool GameTime::operator==(const GameTime& other) const {
    return totalMinutes == other.totalMinutes;
}

// 출력 연산자 구현
std::ostream& operator<<(std::ostream& os, const GameTime& time) {
    int hours = time.totalMinutes / 60;
    int minutes = time.totalMinutes % 60;
    os << hours << "시간 " << minutes << "분";
    return os;
}