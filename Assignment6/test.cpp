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
    Class<Class1> class1T(Class1(), 1, {1.1f, 2.2f});
    EXPECT_TRUE(class1T.foo());
}

TEST(Class1Test, FalseCase) {
    Class<Class1> class1T(Class1(), -1, {1.1f, 2.2f});
    EXPECT_FALSE(class1T.foo());
}

TEST(Class2Test, TrueCase) {
    Class<Class2> class2T(Class2(), 1, {1.1f});
    EXPECT_TRUE(class2T.foo());
}

TEST(Class2Test, FalseCase) {
    Class<Class2> class2T(Class2(), 1, {});
    EXPECT_FALSE(class2T.foo());
}

TEST(Class3Test, TrueCase) {
    Class<Class3> class3T(Class3(), -1, {1.1f});
    EXPECT_TRUE(class3T.foo());
}

TEST(Class3Test, FalseCase) {
    Class<Class3> class3T(Class3(), 1, {1.1f});
    EXPECT_FALSE(class3T.foo());
}

TEST(SpecializationTest, Int) {
    Class<int> classInt(42, 5, {1.0f, 2.0f});
    EXPECT_TRUE(classInt.foo());
}

TEST(SpecializationTest, Double) {
    Class<double> classDouble(42.0, 5.0, {1.0f, 2.0f});
    EXPECT_FALSE(classDouble.foo());
}
