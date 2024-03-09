#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "perfect_num.h"

using namespace std;

bool perfect_num(int &given_int){
    if (given_int <= 0) {
        return false;
    }

    vector<int> rising(given_int-1);
    vector<int> divisors;

    int indx = 1;
    int sum = 0;
    bool perfect = false;
    
    for_each(rising.begin(), rising.end(), [&indx](int & x) { x = indx++; });
    for_each(rising.begin(), rising.end(), [&indx, &divisors, &given_int](int & x) {if(given_int%x == 0){ divisors.push_back(x); }});
    for_each(divisors.begin(), divisors.end(), [&sum](int & x) mutable {sum += x;});

    (sum == given_int) ? perfect = true : perfect = false;
    return perfect;
}
