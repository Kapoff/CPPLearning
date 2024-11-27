#include <cmath>
#include <iostream>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;
using messaging::greet; // using a specific function instead of the whole namespace

int main() {

    greet ("john");
    cout << "Hello World!" << endl;
    return 0;
}
