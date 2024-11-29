/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#ifndef WEAPON_H
#define WEAPON_H
#include <string>

class Weapon {
 private:
  std::string type;
  int power;

 public:
  Weapon();
  Weapon(const std::string& type, int power);

  std::string getType() const;

  int getPower() const;

  std::string display() const;
};

#endif
