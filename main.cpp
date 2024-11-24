#include <iostream>


using namespace std;

int main() {
    int temperature;
    cout << "Enter temperature in kelvin(???): ";
    cin >> temperature;

    if (temperature <= 60) {
        cout << "is Cold in dis besh" << endl;
        cout << "You bettah dress up for the weather" << endl;
    }
    else if (temperature == 69) cout << "Nice! =D" << endl;

    else if (temperature > 60 && temperature != 69)
        cout << "well, don't be bitchin bout it then..." << endl;
    else
        cout << "dude, i don't even know rn..." << endl;
    cout << "Done" << endl;
    return 0;
}
