#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int max(int a, int b) {
    return a>b ? a : b;
}


int main() {
    int a =0;
    int b =0;
    cout << "enter two numbers:" << endl;
    cin >> a >> b;
    cout<< "the bigger number is " << max(a, b);

    return 0;
}
