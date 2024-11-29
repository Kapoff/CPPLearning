#include <cmath>
#include <iostream>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;

/*
void printingNumbers(int numbers[]) {
            // will not work, because numbers[] as passed though the functions args, is just a pointer
    for (int i = 0; i < size(numbers); i++)
        cout << numbers[i] << " ";
}*/
void printingNumbers(int numbers[], int arraySize) {
    // need to add param to pass array size, in order to loop over array
    for (int i = 0; i < arraySize; i++)
        cout << numbers[i] << " ";
}

int main() {
    int first[] = {1, 2, 3, 4, 5};
    int other[] = {1, 2, 3, 4, 5, 434};

    printingNumbers(first, size(first));

    return 0;
}
