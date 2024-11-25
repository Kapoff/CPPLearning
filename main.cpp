#include <iostream>


using namespace std;

int main() {
    int myNum = 7;

    int guess{};
    while (guess != myNum) {
        cout << "Guess my number : " << endl;
        cin >> guess;
        if (guess != myNum) cout << "nope" << endl;
    }
    cout << "yay!" << endl;
    return 0;
}
