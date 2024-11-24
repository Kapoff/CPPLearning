#include <iostream>


using namespace std;

int main() {

    int x = 10;
    int y = 3;

    double z = (double)x / y; // C-style cast, may create issues/
    double z_butBetter = static_cast<double>(x) / y; //static cast is better and safer
    cout << z << endl
         << z_butBetter << endl;
    return 0;
}
