//
// Created by alexe on 2024-11-27.
//
#include <iostream>


using namespace std;

namespace messaging {// defining namespace to avoid function name conflicts (same as in header file)
    void greet (string name) {
        cout <<"Hello " << name << endl;
    }
}
