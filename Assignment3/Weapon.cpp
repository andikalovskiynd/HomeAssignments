/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment3: Transformers classes
 */
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
