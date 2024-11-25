/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#include <iostream>
#include <string>
#include "Energy.h"

Energy::Energy(const std::string& sourceName) {
    this->sourceName = sourceName;
}
std::string Energy::getSource() {
    return sourceName;
}

std::ostream& operator<<(std::ostream& os, const Energy& energy) {
    os << "Energy(Source: " << energy.sourceName << ")";
    return os;
}