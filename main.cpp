#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <bits/ranges_algo.h>

#include "utils/greet.hpp"

using namespace std;


int main() {

    int numero = 10;
    int salario = 2356;
    int* pointer = &numero; // creating a pointer with type* and passing the var by ref with &nameOfVar
    // pointer needs to be the same data type

    cout << *pointer << endl; //using the pointer to print out the value of the thing it points to

    *pointer = 666; //using the pointer to set the thing it point to instead of setting the thing by name directly

    cout << numero << endl; // printing the modifier thing though a pointer to confirm it worked.

    pointer = &salario; //a pointer can also be re-indicated
    cout << *pointer << endl;

    return 0;
}
