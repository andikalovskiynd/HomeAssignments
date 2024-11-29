/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#include "Transformer.h"

#include <iostream>
#include <string>

Transformer::Transformer()
    : name("Default"),
      type("Unknown"),
      strength(0),
      weapon(Weapon()),
      energy(nullptr) {}

Transformer::Transformer(const std::string& name, const std::string& type)
    : name(name), type(type), strength(0), weapon(Weapon()), energy(nullptr) {}

Transformer::Transformer(const std::string& name, const std::string& type,
                         int strength, const Weapon& weapon, Energy* energy)
    : name(name),
      type(type),
      strength(strength),
      weapon(weapon),
      energy(energy) {}

std::string Transformer::getName() const { return name; }
void Transformer::setName(std::string& newName) { name = newName; }

std::string Transformer::getType() const { return type; }
void Transformer::setType(std::string& newType) { type = newType; }

int Transformer::getStrength() const { return strength; }

void Transformer::setStrength(int newStrength) { strength = newStrength; }

Weapon Transformer::getWeapon() const { return weapon; }

std::string Transformer::attack() {
  return "Attacking with " + weapon.getType();
}

std::string Transformer::useEnergySource() {
  return "Using energy source " + (energy ? energy->getSource() : "Unknown");
}

bool Transformer::operator<=(const Transformer& other) const {
  return this->strength <= other.strength;
}

bool Transformer::operator>=(const Transformer& comparable) const {
  return this->strength >= comparable.strength;
}

std::string Transformer::display() const {
  return "Transformer. Name: " + name + ", Type: " + type +
         ", Strength: " + std::to_string(strength) +
         ", Weapon: " + weapon.display() +
         ", Energy: " + (energy ? energy->getSource() : "None") + ")";
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
  os << transformer.display();
  return os;
}

int Transformer::getStrengthHeritant() const { return strength; }

std::string Transformer::getNameHeritant() const { return name; }

std::string Transformer::getTypeHeritant() const { return type; }