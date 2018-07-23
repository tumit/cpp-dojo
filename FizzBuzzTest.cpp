#include <gtest/gtest.h>

namespace fizzbuzz {
  std::string Say(const int n) {
    return "";
  }
}

TEST(FizzBuzzTest, Fizz) {
  EXPECT_EQ("Fizz", fizzbuzz::Say(3));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}