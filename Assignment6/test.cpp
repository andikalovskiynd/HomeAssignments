/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment6: template classes
 */

#include <gtest/gtest.h>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "TClass.h"

TEST(Class1Test, TrueCase) {
    Class1 obj;
    std::vector<float> vector = {1.1f, 2.2f};
    EXPECT_TRUE(obj.bar(1, vector));
}

TEST(Class1Test, FalseCase) {
    Class1 obj;
    std::vector<float> vector = {1.1f, 2.2f};
    EXPECT_FALSE(obj.bar(0, vector));
}

TEST(Class2Test, TrueCase) {
    Class2 obj;
    std::vector<float> vector = {1.1f};
    EXPECT_TRUE(obj.bar(0, vector));
}

TEST(Class2Test, FalseCase) {
    Class2 obj;
    std::vector<float> vector = {};
    EXPECT_FALSE(obj.bar(0, vector));
}

TEST(Class3Test, TrueCase) {
    Class3 obj;
    std::vector<float> vector = {1.1f, 2.2f};
    EXPECT_TRUE(obj.bar(-2, vector));
}

TEST(Class3Test, FalseCase) {
    Class3 obj;
    std::vector<float> vector = {1.1f, 2.2f};
    EXPECT_FALSE(obj.bar(-1, vector));
}

TEST(SpecializationTest, Int) {
    Class<int, Class2> obj(42, Class2(), 5, {});
    EXPECT_TRUE(obj.foo());
}

TEST(SpecializationTest, Double) {
    Class<double, Class3> obj(3.14, Class3(), -1, {1.1f});
    EXPECT_FALSE(obj.foo());
}
