/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment 2b: Reverse Polish Notation
 */

#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
#ifndef RPN_H
#define RPN_H

double go (const char* p);
bool isNumber (const char* p);
double operate (char op, double a, double b);

#endif 