#include <string>

#include <gmock/gmock.h>

#include "fizzbuzz.hpp"

class FizzBuzzTest : public ::testing::Test {
 protected:
  FizzBuzz fizzbuzz;
};

TEST_F(FizzBuzzTest, OneReturnsOne) {
  EXPECT_EQ("1", fizzbuzz(1));
}

TEST_F(FizzBuzzTest, TwoReturnsTwo) {
  EXPECT_EQ("2", fizzbuzz(2));
}

TEST_F(FizzBuzzTest, ThreeReturnsFizz) {
  EXPECT_EQ("Fizz", fizzbuzz(3));
}

TEST_F(FizzBuzzTest, FiveReturnsBuzz) {
  EXPECT_EQ("Buzz", fizzbuzz(5));
}

TEST_F(FizzBuzzTest, FifteenReturnsFizzBuzz) {
  EXPECT_EQ("FizzBuzz", fizzbuzz(15));
}

TEST_F(FizzBuzzTest, SevenReturnsFuzz) {
  EXPECT_EQ("Fuzz", fizzbuzz(7));
}

TEST_F(FizzBuzzTest, TwentyOneReturnsFizzFuzz) {
  EXPECT_EQ("FizzFuzz", fizzbuzz(21));
}

TEST_F(FizzBuzzTest, ThirtyFiveReturnsBuzzFuzz) {
  EXPECT_EQ("BuzzFuzz", fizzbuzz(35));
}

TEST_F(FizzBuzzTest, HundredOFiveReturnsFizzBuzzFuzz) {
  EXPECT_EQ("FizzBuzzFuzz", fizzbuzz(105));
}
