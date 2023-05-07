#include <string>

#include <gmock/gmock.h>

#include "fizzbuzz.hpp"

TEST(fizzbuzz, OneReturnsOne) {
  EXPECT_EQ("1", fizzbuzz(1));
}