#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;


// each function has its own signature.
// Signature = name + (number and type of parameters)

void greet (string name) { // signature = name" greet + (string)
    cout <<"Hello "<<name<<endl;
}

void greet(string title, string name) {// signature = name" greet + (string + string)
    cout <<"Hello "<<title<<" "<<name<<endl;
}

// this function WILL fail to compile because it has the same signature as previous one.
/*
void greet(string firstName, string lastName) {
    cout <<"Hello "<<firstName<<" "<<lastName<<endl;
}
*/


int main() {


    //both functions will run, because they have different signatures
    greet("Gorn");
    greet("Dr", "Gorn");
    return 0;
}
