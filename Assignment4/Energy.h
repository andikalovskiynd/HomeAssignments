/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#ifndef ENERGY_H
#define ENERGY_H
#include <iostream>
#include <string>

class Energy {
 private:
  std::string sourceName;

 public:
  Energy(const std::string& sourceName);
  std::string getSource();

  friend std::ostream& operator<<(std::ostream& os, const Energy& energy);
};

#endif
