#include <iostream>

#include <iomanip>
#include <limits>

using namespace std;



int main() {


    auto number = numeric_limits<short>::min();
    cout << number << endl;
    cout << sizeof(number);

    return 0;
}
