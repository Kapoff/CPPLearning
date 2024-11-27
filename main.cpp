#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

double calcTax(double income, double taxRate = .2256) {
    return income*taxRate;
}


int main() {

     double taxes = calcTax(4956.33); //seccond arg is optional because it has a default value

    cout << taxes;
    return 0;
}
