/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment 2b: Reverse Polish Notation
 */

#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
#ifndef STACK_H
#define STACK_H

double* widenStack (double* stack, int& capacity);
void push (double*& stack, int& top, int& capacity, double value);
double pop (double*& stack, int& top, double& value);

#endif 