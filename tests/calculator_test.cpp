#include <gtest/gtest.h>

extern "C" {
#include "calculator.h"
}

TEST(CalculatorTest, AddsTwoNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(CalculatorTest, AddsNegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(FizzBuzz, testFizz){
    ASSERT_EQ(fizzbuzz(3), 300);
}

TEST(FizzBuzz, testBuzz){
    ASSERT_EQ(fizzbuzz(5), 500);
}