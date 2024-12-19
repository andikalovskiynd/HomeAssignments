/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment6: template classes
 */

#include <iostream>
#include <vector>

template<typename Type1, typename Type2>
class Class {
  private:
    Type1 parameter1;
    Type2 parameter2;
    int number;
    std::vector<float> vector;

  public:
    Class (const Type1& _parameter1, const Type2& _parameter2, int _number, const std::vector<float>& _vector) : parameter1(_parameter1),
        parameter2(_parameter2), number(_number), vector(_vector) {}

    bool foo() {
        bool result1 = parameter1.bar(number, vector);
        bool result2 = parameter2.bar(number, vector);

        std::cout << "Class1::bar returned: " << result1 << std::endl;
        std::cout << "Class3::bar returned: " << result2 << std::endl;

        return result1 && result2;
    }
};

template <typename Type>
class Class<int, Type> {
  private:
    int parameter1;
    Type parameter2;

    int number;
    std::vector<float> vector;

  public:
    Class (int _parameter1, const Type& _parameter2, int _number, const std::vector<float> _vector) : parameter1(_parameter1),
        parameter2(_parameter2), number(_number), vector(_vector) {}

    bool foo () {
        return true;
    }
};

template <typename Type>
class Class<double, Type> {
  private:
    double parameter1;
    Type parameter2;

    int number;
    std::vector<float> vector;

  public:
    Class (double _parameter1, const Type& _parameter2, int _number, const std::vector<float> _vector) : parameter1(_parameter1),
        parameter2(_parameter2), number(_number), vector(_vector) {}

    bool foo () {
        return false;
    }
};
