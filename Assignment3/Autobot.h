#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <string>
#include <iostream>
#include "Transformer.h"

class Autobot: public Transformer
{
    private:
    std::string friendName;
    int beauty;

    public:
    Autobot(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string friendName, int beauty);

    std::string getFriend() const;

    void setFriend(const std::string newFriendName);

    int getBeauty() const;

    void setBeauty(int newBeauty);
};

#endif

