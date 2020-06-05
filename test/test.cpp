#define CATCH_CONFIG_MAIN

#include "../src/menu.h"
#include "../src/test.h"
#include "../lib/catch.hpp"

TEST_CASE("TestCheck1", "CheckOk1")
{
    int test1 = check("апельсин", "апельсин");
    int expected = 1;
    REQUIRE(test1 == expected);
}

TEST_CASE("TestCheck2", "CheckOk2")
{
    int test1 = check("дом", "рот");
    int expected = 0;
    REQUIRE(test1 == expected);
}

TEST_CASE("TestCheck3", "CheckOk3")
{
    int test1 = check("АНАНАС", "АНАНАС");
    int expected = 1;
    REQUIRE(test1 == expected);
}

TEST_CASE("TestCheck4", "CheckOk4")
{
    int test1 = check("гУбА", "лицо");
    int expected = 0;
    REQUIRE(test1 == expected);
}

TEST_CASE("TestCheck5", "CheckOk5")
{
    int test1 = check("wrist", "wrist");
    int expected = 1;
    REQUIRE(test1 == expected);
}
