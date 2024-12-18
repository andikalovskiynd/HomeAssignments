/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment 2b: Reverse Polish Notation
 */

#include "stack.h"
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

double* widenStack (double* stack, int& capacity)
{
    capacity *= 2;
    double* newStack = new double[capacity];
    for (int i = 0; i < capacity / 2; ++i)
    {
        newStack[i] = stack[i];
    }
    delete[] stack;
    return newStack;
}

void push (double*& stack, int& top, int& capacity, double value)
{
    if (top + 1 >= capacity)
    {
        stack = widenStack(stack, capacity);
    }
    stack[++top] = value;
}

double pop (double*& stack, int& top, double& value)
{
    if (top == -1)
    {
        throw std::runtime_error("Stack is empty!");
    }
    value =stack[top--];
    return value;
}