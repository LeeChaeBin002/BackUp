#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
private:
    std::string name;
    int damage;

public:
    Weapon(std::string name, int damage);

    std::string getName() const;
    int getDamage() const;

    void upgrade();
    void print() const;
};

#endif // WEAPON_H