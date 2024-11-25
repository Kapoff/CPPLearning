#include <iostream>


using namespace std;

int main() {
    int myNum = 7;
    int number{};
    int counter = 0;

    // do while executes the block after do before evaluation of the condition
    // thus it will always be run at least once
    do {
        cout << "Enter a number:";
        cin >> number;
        counter++;
        if (counter > 5 && !(number>=1 && number<=5) ) cout << "Hint: it's smaller than 6" << endl;
    } while (number<1 || number>5);
    cout << "yay!" << endl;
    return 0;
}
