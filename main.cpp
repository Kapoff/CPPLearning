#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <bits/ranges_algo.h>

#include "utils/greet.hpp"

using namespace std;



int main() {
    float baba[] = {1, 2, 333, 4, 5, 6, 7, 8};

    float* ptr = &baba[size(baba)-1];

    while (ptr >= baba) {
        // using baba like this because technically, baba is a pointer to baba[0], so we compare addresses
        // this means that we walk through the array, backwards becausee --, until we hit the address of baba[0]
        cout <<setw(12) <<  *ptr<<" ";
        ptr--;
    }

    //case in point, this will print that ptr is, instead of what it points to, because ptr != *ptr
    // ptr is just address in memory, *ptr is what is stored at that address
    cout << endl;
    ptr = &baba[size(baba)-1]; // resetting in to last index because we decremented it a bunch up top
    while (ptr >= baba) {

        cout << ptr <<" "; // printing the actual pointer (address), not the value inside
        ptr--;
    }
    cout << endl <<size(baba)-1 << endl;

    return 0;
}
