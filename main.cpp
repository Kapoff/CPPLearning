#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void increaseAmount(double& amount) { // we can pass parameters by ref by tagging them with & after their type
    amount *=1.2;
}


int main() {

    double price = 100.1;
    increaseAmount(price); // this will pass the value of price by ref, instead of copy
    cout << price << endl;

    return 0;
}
