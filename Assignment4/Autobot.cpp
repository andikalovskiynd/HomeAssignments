/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#include "Autobot.h"

#include <iostream>
#include <string>

#include "Transformer.h"

Autobot::Autobot()
    : Transformer("Default", "Autobot", 0, Weapon(), nullptr),
      friendName("Unknown"),
      beauty(0) {}

Autobot::Autobot(const std::string& name, const std::string& type)
    : Transformer(name, type, 0, Weapon(), nullptr),
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