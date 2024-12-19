#include <iostream>
#include "Class1.h"

bool Class1::bar (int number, std::vector<float>& vector)
{
    return number > 0;
}

int Class1::c_1_1()
{
    std::cout << "Method c_1_1" << std::endl;
    return 0;
}

int Class1::c_1_2()
{
    std::cout << "Method c_1_2" << std::endl;
    return 0;
}

int Class1::c_1_3()
{
    std::cout << "Method c_1_3" << std::endl;
}