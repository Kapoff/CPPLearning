#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

string fullName(string firstName, string  lastName) {
    return firstName + " " + lastName;
}

void greet (string name) {
    cout << "Hello " << name << endl;
}

int main() {

    greet(fullName("tired",", I am dad."));

    return 0;
}
