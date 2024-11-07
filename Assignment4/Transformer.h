/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment3: Transformers classes
 */
#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include "Weapon.h"
#include "Energy.h"
#include <string>
#include <iostream>

class Transformer
{
private:
    std::string name;
    std::string type;
    int strength;
    Weapon weapon;
    Energy* energy;

public:
    Transformer(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy);

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

};

#endif


