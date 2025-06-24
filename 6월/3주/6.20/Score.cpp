#include <iostream>
#include "Score.h"
using namespace std;

Score::Score(int initial) : score(initial) {}

int Score::Getscore() const {
    return score;
}

char Score::GetRank() const {
    if (score >= 150) return 'A';
    if (score >= 100) return 'B';
    if (score >= 50) return 'C';
    return 'D';
}

void Score::addScore(int amount) {
    score += amount;
    cout << amount << "점 추가!" << endl;
}

void Score::print() const {
    cout << "현재 점수: " << score << " (등급: " << GetRank() << ")" << endl;
}