#include <cmath>
#include <iostream>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;

int searchArray(auto array, int arraySize, auto elementToFind) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == elementToFind) {
            return i;
        }
    }
        return -1;
}


int main() {

    string values [] = {"Joe", "Mark", "3"};

    auto search = "3";
        int index = searchArray(values, size(values), search);

    if (index == -1) {
        cout << "No such element in array" << endl;
    }
    else {

    cout << search << " is located at " << index << endl;
    }
    return 0;
}
