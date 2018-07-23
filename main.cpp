
#include <gtest/gtest.h>

namespace fizzbuzz {
  std::string Say(const int n) {
    if (n % 5 == 0) {
      return "Buzz";
    }
    return "Fizz";
  }
}

TEST(main, Fizz) {
  EXPECT_EQ("Fizz", fizzbuzz::Say(3));
}

TEST(main, Buzz) {
  EXPECT_EQ("Buzz", fizzbuzz::Say(5));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}