#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "perfect_num.h"

using namespace std;

int main() {

    string line;
    int given_int;

    cout << "Enter an integer: ";
    cin >> line;

    given_int = stoi(line);

    bool output = perfect_num(given_int);

    cout << output << endl;

    return 0;
}