#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int array_size = 1;
    cout << "Enter the size of the tree:";
    cin >> array_size;
    int middle_line = round(static_cast<double>(array_size*2)/2);

    for (int y = 0; y < array_size; y++) { //number of lines

        // always print the pyramid size*2 because we build start in both directions from center
        for (int x = 1; x<=array_size*2; x++) {

                if (x >= middle_line-y && x <= middle_line+y)
                    //only print symbols if in middle of line
                    if (y == 0)                                     cout << "*";
                    else if (x == middle_line-y )                   cout << "/";
                    else if (x == middle_line+y)                    cout << "\\";
                    else if (y == array_size-1)                     cout << "_";
                    else                                            cout << ".";
                else cout << " ";
        }
        cout << endl; //finish line
    }

    return 0;
}
