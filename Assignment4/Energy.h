/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment3: Transformers classes
 */
#ifndef ENERGY_H
#define ENERGY_H
#include <string>
#include <iostream>

class Energy
{
private:
    std::string sourceName;
public:
    Energy(const std::string& sourceName);
    std::string getSource();
    
    friend std::ostream& operator<<(std::ostream& stream, const Energy& energy);
};

std::ostream& operator<<(std::ostream& stream, const Energy& energy)
    {
        stream << "Energy (Source: " << energy.sourceName << ")";
        return stream;
    }

#endif

