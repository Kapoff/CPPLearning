#include <iostream>

#include <iomanip>
#include <limits>

using namespace std;



int main() {

    char ch = 'a';
    cout << ch << endl
         << +ch << endl;

    ch++;

    cout << ch << endl
         << +ch ;


    return 0;
}
