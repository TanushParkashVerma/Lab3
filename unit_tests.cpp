//
// Created by tanus on 2019-09-27.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"


TEST_CASE("A new stack is empty", "testTag1")
{
Stack tester;
REQUIRE(tester.empty() == true);
REQUIRE(tester.full() == false);
}

TEST_CASE("A new int is pushed to stack or not ", "testTag2")
{
Stack tester;
REQUIRE(tester.push(2) == true);
REQUIRE(tester.push(3) == true);
}
