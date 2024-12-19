/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment6: template classes
 */

#include <iostream>
#include <vector>

template<typename Type>
class Class {
  private:
    Type parameter1;
    int number;
    std::vector<float> vector;

  public:
    Class (const Type& _parameter1, int _number, const std::vector<float>& _vector) : parameter1(_parameter1),
        number(_number), vector(_vector) {}

    bool foo() {
        bool result1 = parameter1.bar(number, vector);
        return result1;
    }
};

template <>
class Class<int> {
  private:
    int parameter1;
    int number;
    std::vector<float> vector;

  public:
    Class (int _parameter1, int _number, const std::vector<float> _vector) : parameter1(_parameter1),
        number(_number), vector(_vector) {}

    bool foo () {
        return true;
    }
};

template <>
class Class<double> {
  private:
    double parameter1;
    int number;
    std::vector<float> vector;

  public:
    Class (double _parameter1, int _number, const std::vector<float> _vector) : parameter1(_parameter1),
        number(_number), vector(_vector) {}

    bool foo () {
        return false;
    }
};
