/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment6: template classes
 */

#include <iostream>
#include <Class2.h>

bool Class2::bar (int number, std::vector<float>& vector) {
    return !vector.empty();
}

int Class2::c_2_1() {
    std::cout << "Method c_2_1" << std::endl;
    return 0;
}

int Class2::c_2_2() {
    std::cout << "Method c_2_2" << std::endl;
    return 0;
}

int Class2::c_2_3() {
    std::cout << "Method c_2_3" << std::endl;
    return 0;
}
