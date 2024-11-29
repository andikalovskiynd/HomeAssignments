/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#include "Weapon.h"

#include <iostream>
#include <string>

Weapon::Weapon() : type("Default"), power(0) {}
Weapon::Weapon(const std::string& type, int power) : type(type), power(power) {}

std::string Weapon::getType() const { return type; }

int Weapon::getPower() const { return power; }

std::string Weapon::display() const {
  return "Weapon (Type: " + type + ", Power: " + std::to_string(power) + ")";
}