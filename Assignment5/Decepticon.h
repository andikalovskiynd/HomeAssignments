/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#ifndef DECEPTICON_H
#define DECEPTICON_H
#include <string>
#include <iostream>
#include "Transformer.h"

class Decepticon: public Transformer {
  private:
    std::string target;
    int damage;

  public:
    Decepticon();
    Decepticon(const std::string& name);
    Decepticon(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string target, int damage);

    void transform() const override {
        std::cout << "Decepticon::transform called from " << getNameHeritant() << std::endl;
    }

    void openFire() const override {
        std::cout << "Decepticon::openFire called from " << getNameHeritant() << std::endl;
    }

    void ulta() const override {
        std::cout << "Decepticon::ulta called from " << getNameHeritant() << std::endl;
    }

    std::string getTarget() const;
    void setTarget(const std::string newTarget);

    int getDamage() const;
    void setDamage(const int newDamage);

    bool operator<=(const Decepticon& comparable) const;
    bool operator>=(const Decepticon& comparable) const;


    std::string display() const;
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
};

#endif
