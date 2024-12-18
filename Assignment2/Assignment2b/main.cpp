/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment 2b: Reverse Polish Notation
 */

#include "rpn.h"
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

int main ()
{
    char expression[256];

    std::cout << "Enter your expression in reverse polish notation" << std::endl;
    std::cin.getline(expression, 256);


    double result = go(expression);
    std::cout << "Result is " << result << std::endl;

    return 0;
}