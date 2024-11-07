#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
    int power;
public:
    std::string getType() const;
    int getPower() const;
};

#endif
