#include <cmath>
#include <iostream>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;

int main() {
    int first[] = {1, 2, 3, 4, 5};
    // int second[] = first; // does not work, c++ gets mad

    int second[size(first)]; // initialize array with the same size as initial array
    for (int i = 0; i <size(first); ++i) { // loop through indices and copy one by one
        second[i] = first[i];
    }

    for (int number:second)
        cout << number << " ";
    return 0;
}
