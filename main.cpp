
#include <gtest/gtest.h>
#include "calculator.h"

TEST(calculator, add_1_and_9_then_should_be_10) {
  EXPECT_EQ(10, calculator::add(1, 9)) << "add 1 and 9 should be 10";
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}