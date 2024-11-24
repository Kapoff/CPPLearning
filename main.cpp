#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;



int main() {

    cout << "Rolling a D6" << endl;
    int seed_garbage;

    cout << "Seed garbage is " << seed_garbage << endl;

    srand(time(nullptr));
    short maxValue =6;
    short minValue =1;
    int number = (rand() %(maxValue - minValue + 1))+minValue;
    int otherNumber = (rand() %(maxValue - minValue + 1))+minValue;

    cout << number << endl;
    cout << otherNumber << endl;

    cout << left << setw(10) << "sprint" << setw(10) << "run" << endl
                 << setw(10) << "crawl"  << setw(10) << "stay" << endl;

    cout << fixed << setprecision(5) << 13.22465;

    return 0;
}

/*
int main() {
    float price = 99.99f;
    auto size = 3409L;
    auto letter = 'd';
    auto bigFloat = 3.14159265358979323846;
    int number = 0 ;
    cout << number << endl;
    return 0;
}*/

//calculate the area of a circle
/*int main() {
    double radius = 1 ;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double result = numbers::pi * pow(radius,2);
    cout << result << endl;
    return 0;
}*/

//temperature conversion
/*
int main() {
    double TempF =0;
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> TempF;
    double TempC = (TempF -32)/1.8;
    cout << "Equivalent Temperature in Celcius: " <<TempC <<" degrees";
}
*/


//general practice

/*int main() {
    int a = 12;
    int b = 7;
    double x = 10;
    double y = 5;
    double z = (x+10)/(3*y);
    cout    << "z = " <<z << endl
            << "y = " << y << endl;
    return 0;
}*/


// Taxes
/*int main() {
    double Sales =95000.00;
    cout << "Enter your earnings: ";
    cin >> Sales;

    const double State_Tax_Percentage = 4;
    const double County_Tax_Percentage = 2;

    double State_Tax_Due = Sales/100*State_Tax_Percentage;
    double County_Tax_Due = Sales/100*County_Tax_Percentage;
    double Total_Tax_Due = State_Tax_Due+County_Tax_Due;

    cout << "State Tax is " <<"$" << State_Tax_Due <<endl
         << "County tax is " <<"$" << County_Tax_Due <<endl
         << "For a total of " <<"$" << Total_Tax_Due <<", from a total sales value of " <<"$" <<Sales <<endl;

    return 0;
}*/