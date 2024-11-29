#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <bits/ranges_algo.h>

#include "utils/greet.hpp"

using namespace std;


int main() {
    float matrix [3][3] = {215.54, 41.546,564.1,
                         -45,359.3,0,
                         1,1,1};
    float array [2][3] = {
        {1,2,3},
        {4,5,6}};
//can be done both ways apparently
    cout << "Transform matrix be like: " << endl;

    for ( int x = 0; x < size(matrix); x++) {
        for ( int y = 0; y < size(matrix[x]); y++) {
            cout <<setw(7) <<  matrix[x][y] << " ";
        }
        cout << endl;
    }
    cout << "array size: " << size(matrix) << " by " <<size(matrix[1]) << endl;

    return 0;
}
