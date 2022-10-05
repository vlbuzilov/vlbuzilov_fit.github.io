#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Info
    cout << endl;
    cout << "Author: Vladyslav Buzilov, group IPZ-12" << endl;
    cout << "Lab 1, part 1" << endl;
    cout << "Variant 3" << endl << endl;
    cout << "The task is to calculate X = (-2.25 * (A + 2 * B * C))/(B - D ^ 1/2)" << endl;

    //Types of variables
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;  //variables for input numbers
    double x;                             //answer's variable


    //Take input data
    cout << "Write here values from a to d:" << endl;
    cout << "Type A number: " << endl;
    cin >> a;
    cout << "Type B number: " << endl;
    cin >> b;
    cout << "Type C number: " << endl;
    cin >> c;
    cout << "Type D number(not negative): " << endl;
    cin >> d;

    while(d < 0 )                                               //check if d < 0
    {
        cout << "Print here not negative numbers: " << endl;
        cin >> d;
    }


    //calculate by formula
    x = (-2.25 * (a + 2 * b * c))/(b - sqrt(d));

    //print result of the expression and input data
    cout << "A = " << a << "\nB = " << b << "\nC = " << c << endl << endl;
    cout << "result: " << endl;
    cout << "X = " << x << endl;
    return 0;

}
