#include <cmath>
#include <iostream>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;



int main() {

    int values [3] = {1, 2, 3};
    // int x = values[0];
    // int y = values[1];
    // int z = values[2];

    //now the same thing byt better
    auto [x,y,z] = values; //called unpacking in python and in C++: structured binding
    cout << x << ", " << y << ", " << z << endl;
    return 0;
}
