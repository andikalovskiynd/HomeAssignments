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
};

#endif

