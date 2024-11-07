/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment3: Transformers classes
 */
#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
    int power;
public:
    std::string getType() const;
    int getPower() const;
    
    friend std::ostream& operator<<(std::ostream& stream, const Weapon& weapon);
};

std::ostream& operator<<(std::ostream& stream, const Weapon& weapon)
    {
        stream << "Weapon (Type: " << weapon.type << ", Power: " << weapon.power << ")";
        return stream;
    }
    
#endif
