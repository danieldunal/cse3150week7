#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void display(const vector<int> & vect) {      //Prints all elements in a vector
  for_each(vect.begin(), vect.end(), [](int elt){ cout << elt << " "; });
  cout << endl;
}

int main() {

    string line;
    int given_int;

    cout << "Enter an integer: ";
    cin >> line;

    given_int = stoi(line);

    if (given_int <= 0) {
        cout << "false" << endl;
        return 0;
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
    string output = (perfect) ? "true" : "false";  

    cout << output << endl;

    return 0;
}