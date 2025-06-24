#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon::Weapon(string name, int damage)
    : name(name), damage(damage) {
}

string Weapon::getName() const {
    return name;
}

int Weapon::getDamage() const {
    return damage;
}

void Weapon::upgrade() {
    damage += 5;
    cout << "무기 강화!" << endl;
}

void Weapon::print() const {
    cout << "무기: " << name << " (공격력: " << damage << ")" << endl;
}

