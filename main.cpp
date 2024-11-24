#include <iostream>


using namespace std;

int main() {

    int tuition{};
    cout << "You a US citizen? ";
    string citizen;
    cin >> citizen;


    if (citizen == "yes") { //brackets are important here, because without them final else ain't recognized
        cout << "aight, you good..." << endl;
        cout << "you livin in CA?";
        string CA;
        cin >> CA;

        if (CA != "yes")  tuition = 1000;

        if (tuition) cout << "pay up " << tuition << endl;
        else cout << "you get it for free" << endl;
    }

    // ⇙ this else down here wont get recognized if first "if" is without brackets
    else cout << "dude, i don't even know rn..." << endl << "Pay up 3k, i guess..." << endl;

    cout << "Done" << endl;
    return 0;
}
