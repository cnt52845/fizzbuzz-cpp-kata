#include <string>

#include <gmock/gmock.h>

#include "fizzbuzz.hpp"

TEST(fizzbuzz, OneReturnsOne) {
  EXPECT_EQ("1", fizzbuzz(1));
}

TEST(fizzbuzz, TwoReturnsTwo) {
  EXPECT_EQ("2", fizzbuzz(2));
}

TEST(fizzbuzz, ThreeReturnsFizz) {
  EXPECT_EQ("Fizz", fizzbuzz(3));
}

TEST(fizzbuzz, FiveReturnsBuzz) {
  EXPECT_EQ("Buzz", fizzbuzz(5));
}
