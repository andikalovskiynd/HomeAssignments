/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment 2b: Reverse Polish Notation
 */

#include "rpn.h"
#include "stack.h"
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

const int init_capacity = 15;

double go (const char* p)
{
    int capacity = init_capacity;
    double* stack = new double[capacity];
    int top = -1;

    while (*p != '\0')
    {
        while (*p == ' ') ++p;

        if (*p == '\0') break;

        if (isdigit(*p) || (*p == '-' && isdigit(*(p + 1))))
        {
            char* end;
            double number = std::strtod(p, &end);
            push(stack, top, capacity, number);
            p = end;
        }

        else if (*p == '+' || *p == '-' || *p == '*' || *p == '/')
        {
            if (top < 1)
            {
                delete[] stack;
                throw std::runtime_error("Not enough operands!");
            }

            double b, a;
            pop (stack, top, b);
            pop(stack, top, a);
            push(stack, top, capacity, operate(*p, a, b));
            ++p;
        }
        else
        {
            delete[] stack;
            throw std::runtime_error("Error!");
        }
    }

    double result;
    if (!pop(stack, top, result) || top != -1)
    {
        delete[] stack;
        throw std::runtime_error("Invalid expression!");
    }

    delete[] stack;
    return result;
}

bool isNumber (const char* p)
{
    if (*p == '-') ++p;
    while (*p != '\0')
    {
        if (!isdigit(*p)) return false;
        ++p;
    }
    return true;
}

double operate (char op, double a, double b)
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) throw std::runtime_error("Division by 0 is not defined!");
            return a / b;
        default: throw std::runtime_error("Not an operator!");
    }
}