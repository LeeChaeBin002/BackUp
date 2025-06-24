#ifndef GAMETIME_H
#define GAMETIME_H

#include <iostream>

class GameTime {
private:
    int totalMinutes;

public:
    GameTime(int minutes = 0);

    // 비교 연산자
    bool operator>(const GameTime& other) const;
    bool operator<(const GameTime& other) const;
    bool operator==(const GameTime& other) const;

    // 출력 연산자
    friend std::ostream& operator<<(std::ostream& os, const GameTime& time);
    
};

#endif