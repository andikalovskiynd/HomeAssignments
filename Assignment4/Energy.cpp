/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment3: Transformers classes
 */
#include <iostream>
#include <string>
#include "Energy.h"

Energy::Energy(const std::string& sourceName)
{
    this->sourceName = sourceName;
}
std::string Energy::getSource()
{
    return sourceName;
}
