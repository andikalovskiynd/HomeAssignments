#include <gtest/gtest.h>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "TClass.h"

TEST(ClassTest, Class1Class2_True) {
    Class1 class1Obj;
    Class2 class2Obj;
    Class<Class1, Class2> testClass(class1Obj, class2Obj, 1, {1.0f, 2.0f});
    EXPECT_TRUE(testClass.foo());
}

TEST(ClassTest, Class1Class2_FalseCase) {
    Class1 class1Obj;
    Class2 class2Obj;
    Class<Class1, Class2> testClass(class1Obj, class2Obj, -1, {});
    EXPECT_FALSE(testClass.foo());
}

TEST(ClassTest, Class1Class3_TrueCase) {
    Class1 class1Obj;
    Class3 class3Obj;
    Class<Class1, Class3> testClass(class1Obj, class3Obj, -2, {1.0f, 2.0f});
    EXPECT_TRUE(testClass.foo());
}

TEST(ClassTest, Class1Class3_FalseCase) {
    Class1 class1Obj;
    Class3 class3Obj;
    Class<Class1, Class3> testClass(class1Obj, class3Obj, -1, {1.0f});
    EXPECT_FALSE(testClass.foo());
}

TEST(ClassTest, IntClass2_TrueCase) {
    Class<int, Class2> testClass(42, Class2(), 5, {1.0f});
    EXPECT_TRUE(testClass.foo());
}

TEST(ClassTest, IntClass2_FalseCase) {
    Class<int, Class2> testClass(42, Class2(), -5, {});
    EXPECT_TRUE(testClass.foo()); 
}

TEST(ClassTest, DoubleClass3_TrueCase) {
    Class<double, Class3> testClass(3.14, Class3(), -1, {1.0f});
    EXPECT_FALSE(testClass.foo()); 
}

TEST(ClassTest, DoubleClass3_FalseCase) {
    Class<double, Class3> testClass(3.14, Class3(), -1, {1.0f, 2.0f});
    EXPECT_FALSE(testClass.foo()); 
}
