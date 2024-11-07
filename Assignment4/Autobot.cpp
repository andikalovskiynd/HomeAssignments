/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment3: Transformers classes
 */
#include <iostream>
#include <string>
#include "Autobot.h"
#include "Transformer.h"

    Autobot::Autobot(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string friendName, int beauty)
    : Transformer(name, type, strength, weapon, energy)
    {
        this->friendName = friendName;
        this->beauty = beauty;
    }

    std::string Autobot::getFriend() const
    {
        return friendName;
    }

    void Autobot::setFriend(const std::string newFriendName)
    {
        friendName = newFriendName;
    }

    int Autobot::getBeauty() const
    {
        return beauty;
    }

    void Autobot::setBeauty(int newBeauty)
    {
        beauty = newBeauty;
    }
