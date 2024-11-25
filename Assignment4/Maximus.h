/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#ifndef MAXIMUS_H
#define MAXIMUS_H
#include <string>
#include <iostream>
#include "Transformer.h"

class Maximus: public Transformer
{
    private:
    std::string vulnerability;
    int speed;

    public:
    Maximus(const std::string& name, const std::string& type, int strength, Weapon& weapon, Energy* energy, const std::string vulnerability, int speed);

    std::string getVulnerability() const;

    void setVulnerability(const std::string newVulnerability);

    int getSpeed() const;
    
    void setSpeed(int newSpeed);

    bool operator<=(const Maximus& comparable) const;
    bool operator>=(const Maximus& comparable) const;

    std::string display() const; 
    friend std::ostream& operator<<(std::ostream& os, const Maximus& maximus);
};

#endif
