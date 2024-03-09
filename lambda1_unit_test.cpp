#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "doctest.h"
#include "perfect_num.h"

TEST_CASE("perfect num")
{
    SUBCASE("all cases"){
        int p1 = 6;
        int p2 = 28;
        int p3 = 496;

        int zero = 0;
        int one = 1;

        CHECK(perfect_num(p1));
        CHECK(perfect_num(p2));
        CHECK(perfect_num(p3));
    };
}