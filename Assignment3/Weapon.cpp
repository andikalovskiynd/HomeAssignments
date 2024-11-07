#include <iostream>
#include <string>
#include "Weapon.h"

std::string Weapon::getType() const
{
    return type;
}

int Weapon::getPower() const
{
    return power;
}
