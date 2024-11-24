#include <iostream>


using namespace std;

int main() {

    int number1 {};
    int number2 {};

    cout << "Enter two numbers please? " << endl
         << "Number 1:";
    cin >> number1;
    cout << "Number 2:";
    cin >> number2;

    if (number1 > number2) {
        cout << number1 << " is bigger." << endl;
    }
    else if (number1 < number2) {
        cout << number1 << " is smaller" << endl;
    }
    else if (number1 == number2) {
        cout << "Same numbers? Really? How original...";
    }
    else {
        cout << "I said two numbers... fucksake";
    }

    return 0;
}
