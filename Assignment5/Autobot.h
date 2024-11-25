/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <string>
#include <iostream>
#include "Transformer.h"

class Autobot: public Transformer {
  private:
    std::string friendName;
    int beauty;

  public:
    Autobot();
    Autobot(const std::string& name);
    Autobot(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string friendName, int beauty);

    void transform() const override {
        std::cout << "Autobot::transform called from " << getNameHeritant() << std::endl;
    }

    void openFire() const override {
        std::cout << "Autobot::openFire called from " << getNameHeritant() << std::endl;
    }

    void ulta() const override {
        std::cout << "Autobot::ulta called from " << getNameHeritant() << std::endl;
    }

    std::string getFriend() const;
    void setFriend(const std::string newFriendName);

    int getBeauty() const;
    void setBeauty(int newBeauty);

    bool operator<=(const Autobot& comparable) const;
    bool operator>=(const Autobot& comparable) const;

    std::string display() const;
    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
};

#endif

