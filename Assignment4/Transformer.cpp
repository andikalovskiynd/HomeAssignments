/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#include <string>
#include <iostream>
#include "Transformer.h"

Transformer::Transformer(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy)
{
    this->name = name;
    this->type = type;
    this->strength = strength;
    this->weapon = weapon;
    this->energy = energy;
}
    
    std::string Transformer::getName() const
    {
        return name;
    }
    void Transformer::setName(std::string& newName)
    {
        name = newName;
    }
    
    std::string Transformer::getType() const
    {
        return type;
    }
    void Transformer::setType(std::string& newType)
    {
        type = newType;
    }

    int Transformer::getStrength() const
    {
        return strength;
    }
    void Transformer::setStrength(int newStrength)
    {
        strength = newStrength;
    }

    Weapon Transformer::getWeapon() const
    {
        return weapon;
    }

    std::string Transformer::attack()
    {
        return "Attacking with " + weapon.getType();
    }

    std::string Transformer::useEnergySource()
    {
        return "Using energy source " + (energy ? energy->getSource() : "Unknown");
    }

    std::string Transformer::display() const 
    {
    return "Transformer. Name: " + name +
           ", Type: " + type +
           ", Strength: " + std::to_string(strength) +
           ", Weapon: " + weapon.display() +
           ", Energy: " + (energy ? energy->getSource() : "None") + ")";
    }

    std::ostream& operator<<(std::ostream& os, const Transformer& transformer) 
    {
    os << transformer.display();
    return os;
    }