/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#include <iostream>
#include <string>
#include "Maximus.h"
#include "Transformer.h"

Maximus::Maximus(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string vulnerability, int speed)
: Transformer(name, type, strength, weapon, energy)
{
    this->vulnerability = vulnerability;
    this->speed = speed;
}

std::string Maximus::getVulnerability() const
{
    return vulnerability;
}

void Maximus::setVulnerability(const std::string newVulnerability)
{
    vulnerability = newVulnerability;
}

int Maximus::getSpeed() const
{
    return speed;
}

void Maximus::setSpeed(int newSpeed)
{
    speed = newSpeed;
}

std::string Maximus::display() const {
    return "Maximus. Name: " + getName() +
           ", Type: " + getType() +
           ", Strength: " + std::to_string(getStrength()) +
           ", Vulnerability: " + vulnerability +
           ", Speed: " + std::to_string(speed) + ")";
}

std::ostream& operator<<(std::ostream& os, const Maximus& maximus) {
    os << maximus.display();
    return os;
}