/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#include <iostream>
#include <string>
#include "Decepticon.h"
#include "Transformer.h"

Decepticon::Decepticon(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string target, int damage)
: Transformer(name, type, strength, weapon, energy)
{
    this->target = target;
    this->damage = damage;
}

std::string Decepticon::getTarget() const
{
    return target;
}

void Decepticon::setTarget(const std::string newTarget)
{
    target = newTarget;
}

int Decepticon::getDamage() const
{
    return damage;
}

void Decepticon::setDamage(const int newDamage)
{
    damage = newDamage;
}
    std::string Decepticon::display() const 
    {
    return "Decepticon. Name: " + getName() +
           ", Type: " + getType() +
           ", Strength: " + std::to_string(getStrength()) +
           ", Target: " + target +
           ", Damage: " + std::to_string(damage) + ")";
    }

    std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) 
    {
    os << decepticon.display();
    return os;
    }