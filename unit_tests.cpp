//
// Created by tanus on 2019-09-27.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"


TEST_CASE("A new stack is empty", "testTag1")
{
Stack tester1;
REQUIRE(tester1.empty() == true);
REQUIRE(tester1.full() == false);
}

TEST_CASE("A new int is pushed to stack or not ", "testTag2")
{
Stack tester2;
REQUIRE(tester2.push(2) == true);
REQUIRE(tester2.push(3) == true);
}

TEST_CASE("A new stack is full or not", "testTag3")
{
Stack tester;
REQUIRE(tester.full() == false);
REQUIRE(tester.full() == false);
}

TEST_CASE("to check top of stack element", "testTag4")
{
Stack tester3;
REQUIRE(tester3.top() == 1);
REQUIRE(tester3.top() == 1);
}
