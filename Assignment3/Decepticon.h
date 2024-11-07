/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment3: Transformers classes
 */
#ifndef DECEPTICON_H
#define DECEPTICON_H
#include <string>
#include <iostream>
#include "Transformer.h"

class Decepticon: public Transformer
{
    private:
    std::string target;
    int damage;

    public:
    Decepticon(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string target, int damage);

    std::string getTarget() const;

    void setTarget(const std::string newTarget);

    int getDamage() const;

    void setDamage(const int newDamage);
};
