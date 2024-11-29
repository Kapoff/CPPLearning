#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <bits/ranges_algo.h>

#include "utils/greet.hpp"

using namespace std;

void makeShitBigger (float* number) { //passing the thing as a pointer
    *number *= 1.2; //making the stuff inside the var that the pointer is pointing to bigger
}

int main() {
    float shit = 100;
    makeShitBigger(&shit); // passing the var by ref so the pointer can work
    cout <<shit << endl;
    float* pointy = &shit;
    makeShitBigger(pointy); // instead of passing by  var, we can also input a pointer as arg.
    cout <<*pointy;

    // makeShitBigger(shit); // inputting just the var wont work, c++ gets mad

    /*
     * in this simple case, it is simpler and more modern to pass the arg by ref with &varName instead of a pointer
     * the pointer method is outdated byt can still be encountered in legacy code
     */

    return 0;
}
