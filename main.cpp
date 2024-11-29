#include <cmath>
#include <iostream>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;

int main() {
    int numbers[] = {19, 2, 34, 4, 5 };
    cout <<"Arrays has " << size(numbers) << " numbers in it." << endl;

    cout << "output with size()" << endl;
    for ( int i = 0; i < size(numbers); i++) { // size() gives the size ofthe array directly
        cout << numbers[i] << endl;
    }

    cout << "output with sizeof()" << endl;
    for ( int i = 0; i < sizeof(numbers)/sizeof(int); i++) { // sizeof() relies of byt size of the element sampled.
        cout << numbers[i] << endl;
        }


    return 0;
}
