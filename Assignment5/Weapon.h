/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#ifndef WEAPON_H
#define WEAPON_H
#include <string>

class Weapon
{
private:
    std::string type;
    int power;

public:
    Weapon(const std::string& type, int power) : type(type), power(power) {}

    std::string getType() const { return type; }
    int getPower() const { return power; }

    Weapon() : type("Default"), power(0) {}
    
    std::string display() const 
    {
        return "Weapon (Type: " + type + ", Power: " + std::to_string(power) + ")";
    }
};

#endif