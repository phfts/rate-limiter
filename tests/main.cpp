#include <gtest/gtest.h>

#include "route_test.cpp"
#include "rate_limiter_test.cpp"

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}