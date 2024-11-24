#include <iostream>


using namespace std;

int main() {
    // order of logical opperators
    // ()
    //!
    //&&
    //||

    cout << "Are you eligible to work with us? Let's find out! " << endl;

    cout << "Do you have a Bachelor's degree?" << endl;
    bool degree;
    string degree_answer;
    cin >> degree_answer;
     if (degree_answer == "yes")
    {
         degree = true;
     }
    else {
        degree = false;
    }

    cout << "Do you have at least 2 years of work experience?" << endl;

    bool work;
    string work_answer;
    cin >> work_answer;
    if (work_answer == "yes") {
        work = true;
    }
    else {
        work = false;
    }
    bool citizen;
    cout << "Do you have a US citizenship?" << endl;
    string citizen_answer;
    cin >> citizen_answer;

    if (citizen_answer == "yes") {
        citizen = true;
    }
    else {
        citizen = false;
    }

    string result = "Sorry, you are not eligible.";
    if ((degree || work )&& citizen) {
        result = "Congratulations, you qualify!";
    }
    cout << result << endl;
    return 0;
}
