#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

//function declaration (celling compiler that it exists, without specifying what it does)
void greet (string name);




int main() {

    greet ("john"); // will still run,

    return 0;
}

//function definition (tells the compiler what the function does)
void greet (string name) {
    cout <<"hello" << name << endl;
}