/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#include <iostream>
#include <string>
#include "Decepticon.h"
#include "Transformer.h"

Decepticon::Decepticon()
    : Transformer("Default", "Decepticon", 0, Weapon(), nullptr), target("Unknown"), damage(0) {}

Decepticon::Decepticon(const std::string& name)
    : Transformer(name, "Decepticon", 0, Weapon(), nullptr), target("Unknown"), damage(0) {}

Decepticon::Decepticon(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string target, int damage)
    : Transformer(name, type, strength, weapon, energy), target(target), damage(damage) {}

std::string Decepticon::getTarget() const {
    return target;
}

void Decepticon::setTarget(const std::string newTarget) {
    target = newTarget;
}

int Decepticon::getDamage() const {
    return damage;
}

void Decepticon::setDamage(const int newDamage) {
    damage = newDamage;
}
std::string Decepticon::display() const {
    return "Decepticon. Name: " + getName() +
           ", Type: " + getType() +
           ", Strength: " + std::to_string(getStrengthHeritant()) +
           ", Target: " + target +
           ", Damage: " + std::to_string(damage) + ")";
}

bool Decepticon::operator<=(const Decepticon& comparable) const {
    if (this->getStrengthHeritant() == comparable.getStrengthHeritant()) {
        return this->damage <= comparable.damage;
    }
    return this->getStrengthHeritant() <= comparable.getStrengthHeritant();
}

bool Decepticon::operator>=(const Decepticon& comparable) const {
    if (this->getStrengthHeritant() == comparable.getStrengthHeritant()) {
        return this->damage >= comparable.damage;
    }
    return this->getStrengthHeritant() >= comparable.getStrengthHeritant();
}

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
    os << decepticon.display();
    return os;
}