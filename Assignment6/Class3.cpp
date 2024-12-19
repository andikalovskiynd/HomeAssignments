/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment6: template classes
 */

#include <iostream>
#include "Class3.h"

bool Class3::bar (int number, std::vector<float>& vector) {
    return number == -1 * int(vector.size());
}

int Class3::c_3_1() {
    std::cout << "Method c_3_1" << std::endl;
    return 0;
}

int Class3::c_3_2() {
    std::cout << "Method c_3_2" << std::endl;
    return 0;
}

int Class3::c_3_3() {
    std::cout << "Method c_3_3" << std::endl;
    return 0;
}
