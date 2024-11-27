#include <iostream>


using namespace std;

int main() {
    int array_size[] = {4, 3};
    cout << "Enter the size of the array:";
    cin >> array_size[0] >> array_size[1];

    for (int x = 1; x <=array_size[0]; x++) {
        for (int y=1; y<=array_size[1]; y++) {
            cout << "(" << x << "," << y << ")" << endl;
        }
    }
    return 0;
}
