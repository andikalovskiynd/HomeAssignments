/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#ifndef ENERGY_H
#define ENERGY_H
#include <string>
#include <iostream>

class Energy {
  private:
    std::string sourceName;
  public:
    Energy(const std::string& sourceName);
    std::string getSource();

    friend std::ostream& operator<<(std::ostream& os, const Energy& energy);
};

#endif

