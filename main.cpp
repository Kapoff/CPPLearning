#include <cmath>
#include <iostream>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;
using messaging::greet; // using a specific function instead of the whole namespace

void printOddNumbers (int limit) {
    for (int i = 0; i < limit; i++) {
        if (i % 2 == 0) // deliberate == instead of !=, to break odd number behaviour
            cout << i << endl;
    }
}

int main() {


    greet ("john");
    printOddNumbers (10);
    // set breakpoint at fuction execution, because this is the offending part of the code that we want to diagnose
        //then one in debuging, step into the line (F7) to get inside the funtion execution, and step over to get to the logic part
        // you can also add custom code bits to watchers by copypasta in the debug panel, to track particular bits of code without variables
    return 0;
}
