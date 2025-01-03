/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#include "Autobot.h"

#include <iostream>
#include <string>

#include "Transformer.h"

Autobot::Autobot()
    : Transformer("Default", "Autobot", 0, Weapon(), nullptr),
      friendName("Unknown"),
      beauty(0) {}

Autobot::Autobot(const std::string& name)
    : Transformer(name, "Autobot", 0, Weapon(), nullptr),
      friendName("Unknown"),
      beauty(0) {}

Autobot::Autobot(const std::string& name, const std::string& type, int strength,
                 Weapon& weapon, Energy* energy, const std::string friendName,
                 int beauty)
    : Transformer(name, type, strength, weapon, energy),
      friendName(friendName),
      beauty(beauty) {}

std::string Autobot::getFriend() const { return friendName; }

void Autobot::setFriend(const std::string newFriendName) {
  friendName = newFriendName;
}

int Autobot::getBeauty() const { return beauty; }

void Autobot::setBeauty(int newBeauty) { beauty = newBeauty; }

bool Autobot::operator<=(const Autobot& comparable) const {
  if (this->getStrengthHeritant() == comparable.getStrengthHeritant()) {
    return this->beauty <= comparable.beauty;
  }
  return this->getStrengthHeritant() <= comparable.getStrengthHeritant();
}

bool Autobot::operator>=(const Autobot& comparable) const {
  if (this->getStrengthHeritant() == comparable.getStrengthHeritant()) {
    return this->beauty >= comparable.beauty;
  }
  return this->getStrengthHeritant() >= comparable.getStrengthHeritant();
}

std::string Autobot::display() const {
  return "Autobot. Name: " + getName() + ", Type: " + getType() +
         ", Strength: " + std::to_string(getStrengthHeritant()) +
         ", Friend: " + friendName + ", Beauty: " + std::to_string(beauty) +
         ")";
}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
  os << autobot.display();
  return os;
}

void Autobot::transform() const {
  std::cout << "Autobot::transform called from " << getNameHeritant()
            << std::endl;
}

void Autobot::openFire() const {
  std::cout << "Autobot::openFire called from " << getNameHeritant()
            << std::endl;
}

void Autobot::ulta() const {
  std::cout << "Autobot::ulta called from " << getNameHeritant() << std::endl;
}