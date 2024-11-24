#include <iostream>


using namespace std;

int main() {

    string names[3];
    cout << "Enter 3 Names " << endl;

    cout << "Name 1: ";
    getline(cin,names[0]);

    cout << "Name 2: ";
    getline(cin,names[1]);

    cout << "Name 3: ";
    getline(cin,names[2]);

    cout << "what name do you prefer?";
    short prefferedName;
    cin >> prefferedName;

    cout << endl << "The prefered name is " << names[prefferedName-1] << endl;

    return 0;
}
