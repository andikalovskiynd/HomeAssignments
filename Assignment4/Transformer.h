/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>
#include <string>

#include "Energy.h"
#include "Weapon.h"

class Transformer {
 private:
  std::string name;
  std::string type;
  int strength;
  Weapon weapon;
  Energy* energy;

 public:
  Transformer();
  Transformer(const std::string& name, const std::string& type);
  Transformer(const std::string& name, const std::string& type, int strength,
              const Weapon& weapon, Energy* energy);

  ~Transformer() {}

  std::string getName() const;
  void setName(std::string& newName);

  std::string getType() const;
  void setType(std::string& newType);

  int getStrength() const;
  void setStrength(int newStrength);

  Weapon getWeapon() const;

  std::string attack();
  std::string useEnergySource();

  int getStrengthHeritant() const;
  std::string getNameHeritant() const;
  std::string getTypeHeritant() const;

  bool operator<=(const Transformer& comparable) const;
  bool operator>=(const Transformer& comparable) const;

  std::string display() const;
  friend std::ostream& operator<<(std::ostream& os,
                                  const Transformer& transformer);
};

#endif
