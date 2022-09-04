// https://github.com/catchorg/Catch2/releases
// https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md
#include "catch2.hpp"

#include "utility.h"
#include <iostream>

TEST_CASE("add function", "[add]")
{
  std::cout << "add function" << std::endl;
  unsigned int actual = add(1000, 2000);
  unsigned int expected = 3000;
  REQUIRE(actual == expected);
}
