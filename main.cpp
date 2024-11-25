#include <iostream>


using namespace std;

int main() {

    double number1 {};
    double number2 {};

    cout << "Enter two numbers please? " << endl
         << "Number 1:";
    cin >> number1;
    cout << "Number 2:";
    cin >> number2;
    cout << "Enter an opperator";
    char op{};
    cin >> op;

    double result{};

    bool opValid = true;
    switch (op) {
        case '+': result = number1 + number2; break;
        case '-': result = number1 - number2; break;
        case '*': result = number1 * number2; break;
        case '/': result = number1 / number2; break;
        //case '%': result = static_cast<double>(number1) % number2; break; // suggested by Clion, but gives error on operator, skipping for now
        default: cout << "Invalid operation" << endl; opValid = false;
    }
    if (opValid) cout << "Result: " << result << endl;


    return 0;
}
