#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include "perfect_num.h"

int p1 = 6;
int p2 = 28;
int p3 = 496;

int zero = 0;
int one = 1;
int neg_one = 1;

TEST_CASE("perfect num")
{
    CHECK(perfect_num(p1));
    CHECK(perfect_num(p2));
    CHECK(perfect_num(p3));

    CHECK_FALSE(perfect_num(zero));
    CHECK_FALSE(perfect_num(one));
    CHECK_FALSE(perfect_num(neg_one));
}