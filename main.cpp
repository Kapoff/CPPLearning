#include <iostream>


using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your salary: ";
    float salary;
    cin >> salary;

    bool isEligible = (age > 18 && age < 65) || (age >65 && salary >= 3000); // || is for 'or' && is for 'and'
    cout <<boolalpha << "Are you forbidden from participating? : " << !isEligible << endl; // ! is for inverting bool
    return 0;
}
