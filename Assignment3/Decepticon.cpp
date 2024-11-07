/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment3: Transformers classes
 */
#include <iostream>
#include <string>
#include "Decepticon.h"
#include "Transformer.h"

Decepticon::Decepticon(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string target, int damage)
: Transformer(name, type, strength, weapon, energy)
{
    this->target = target;
    this->damage = damage;
}

std::string Decepticon::getTarget() const
{
    return target;
}

void Decepticon::setTarget(const std::string newTarget)
{
    target = newTarget;
}

int Decepticon::getDamage() const
{
    return damage;
}

void Decepticon::setDamage(const int newDamage)
{
    damage = newDamage;
}
