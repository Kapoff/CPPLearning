#include <iostream>


using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for ( int i = 0; i < sizeof(numbers)/sizeof(int); i++) { // cluncky, long, baaaad
        cout << numbers[i] << endl;
    }
    for (int number:numbers) // short, neat, niiiice
        cout << number << endl;
    return 0;
}
