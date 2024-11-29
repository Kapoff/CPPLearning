#include <cmath>
#include <iostream>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;

void bubbleSortArray(auto array[], int arraySize) {
    for (int pass = 0; pass < arraySize; pass++) {
        for (int i = 0; i < arraySize - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
            }
        }
    }



}


int main() {

    int values [] = {5, 6, 1,2,468,4,6,7};

    cout << " OG array is : ";
    for (int i = 0; i < size(values); ++i)
        cout << values[i] << " ";


    cout << endl;
    cout << " sorted array is : ";
    bubbleSortArray(values, size(values));
    for (int i = 0; i < size(values); ++i)
        cout << values[i] << " ";

    return 0;
}
