/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#include <iostream>
#include <string>
#include "Maximus.h"
#include "Transformer.h"

Maximus::Maximus()
    : Transformer("Default", "Autobot", 0, Weapon(), nullptr), vulnerability("Unknown"), speed(0) {}

Maximus::Maximus(const std::string& name, const std::string& type)
    : Transformer(name, type, 0, Weapon(), nullptr), vulnerability("Unknown"), speed(0) {}

Maximus::Maximus(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string vulnerability, int speed)
    : Transformer(name, type, strength, weapon, energy), vulnerability(vulnerability), speed(speed) {}

std::string Maximus::getVulnerability() const {
    return vulnerability;
}

void Maximus::setVulnerability(const std::string newVulnerability) {
    vulnerability = newVulnerability;
}

int Maximus::getSpeed() const {
    return speed;
}

void Maximus::setSpeed(int newSpeed) {
    speed = newSpeed;
}

bool Maximus::operator<=(const Maximus& comparable) const {
    if (this->getStrengthHeritant() == comparable.getStrengthHeritant()) {
        return this->speed <= comparable.speed;
    }
    return this->getStrengthHeritant() <= comparable.getStrengthHeritant();
}

bool Maximus::operator>=(const Maximus& comparable) const {
    if (this->getStrengthHeritant() == comparable.getStrengthHeritant()) {
        return this->speed >= comparable.speed;
    }
    return this->getStrengthHeritant() >= comparable.getStrengthHeritant();
}

std::string Maximus::display() const {
    return "Maximus. Name: " + getName() +
           ", Type: " + getType() +
           ", Strength: " + std::to_string(getStrengthHeritant()) +
           ", Vulnerability: " + vulnerability +
           ", Speed: " + std::to_string(speed) + ")";
}

std::ostream& operator<<(std::ostream& os, const Maximus& maximus) {
    os << maximus.display();
    return os;
}