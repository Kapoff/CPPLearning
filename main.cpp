#include <iostream>


using namespace std;

int main() {
    // order of logical opperators
    // ()
    //!
    //&&
    //||

    bool a = true;
    bool b = false;
    bool c = false;

    bool result = b && !a;
    cout << boolalpha << result << endl;

    result = a || b && c;
    cout << boolalpha << result << endl;

    result = (a || b) && c;
    cout << boolalpha << result << endl;

    return 0;
}
