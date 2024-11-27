#include <iostream>


using namespace std;

int main() {
    int array_size = 1;
    int line = 1;
    cout << "Enter the size of the array:";
    cin >> array_size;

    for (int y = 1; y <= array_size; y++) { //number of lines

        for (int x = 1; x<=y; x++) {
            cout << "*"; //print star as many starts as number of line we in
        }

        if (line==y) {
            cout << endl;
            line++;
        }
    }
    return 0;
}
