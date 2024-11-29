#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <bits/ranges_algo.h>

#include "utils/greet.hpp"

using namespace std;

void swapVars (float* var1, float* var2) {
    float temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main() {
    float shit = 100;
    float lolz = 144;

    cout << "OG order: " << shit << " " << lolz << endl;

    swapVars(&shit,&lolz);
    cout << "Swapped order: " << shit << " " << lolz << endl;
    return 0;
}
