#include <iostream>


using namespace std;

int main() {

    int sales {};

    cout << "How much you made this month? " << endl;
    cin >> sales;
    double commission = (sales >10'000) ? .1 : .05; //conditional operator, shorter than full if statement

    /* replaces this whole thing down there
    if (sales>10'000) {
        commission =.1;
    }
    else commission = .05;
    */

    cout << "Commission percent: " << commission*100 << "%." << " For a total of: "<< sales*commission<< endl;
    cout << "Done" << endl;
    return 0;
}
