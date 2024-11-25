/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
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

    std::string Autobot::display() const 
    {
    return "Autobot. Name: " + getName() +
           ", Type: " + getType() +
           ", Strength: " + std::to_string(getStrength()) +
           ", Friend: " + friendName +
           ", Beauty: " + std::to_string(beauty) + ")";
    }

    std::ostream& operator<<(std::ostream& os, const Autobot& autobot) 
    {
    os << autobot.display();
    return os;
    }