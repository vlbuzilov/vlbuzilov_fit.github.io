#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //info
    cout << endl;
    cout << "Author: Vladyslav Buzilov, group IPZ-12" << endl;
    cout << "Lab 1, part 2" << endl;
    cout << "Variant 3" << endl << endl;
    cout << "Calculate all of the bisectors and medians in ABC triangle" << endl;
    cout << "sides of triangle will be taken from the keyboard" << endl;

    //variables for each value
    double a = 0.0, b = 0.0, c = 0.0;                               //variables for sides
    double bisector_1 = 0.0, bisector_2 = 0.0, bisector_3 = 0.0;    //              bisectors
    double median_1 = 0.0, median_2 = 0.0, median_3 = 0.0;          //              medians

    //take input data
    cout << "type sides here: a, b, c " << endl;
    cout << "type A number:" << endl;
    cin >> a;
    while(a <= 0){                                                  //check if A isn't negative or 0
        cout << "please, only positive:" << endl;
        cin >> a;
    }
    cout << "type B number:" << endl;
    cin >> b;
    while(b <= 0){                                                  //check if B isn't negative or 0
        cout << "please, only positive:" << endl;
        cin >> b;
    }
    cout << "type C number:" << endl;
    cin >> c;
    while(c <= 0){                                                  //check if C isn't negative or 0
        cout << "please, only positive:" << endl;
        cin >> c;
    }


    //check if this triangle is real
    while (a + b < c || a + c < b || b + c < a)
    {
        cout << "this triangle doesn't exist, try again!" << endl;

        cout << "type sides here: a, b, c " << endl;
        cout << "type A number:" << endl;
        cin >> a;
        while(a == 0){
            cout << "please, only positive:" << endl;
            cin >> a;
        }
        cout << "type B number:" << endl;
        cin >> b;
        while(b == 0){
            cout << "please, only positive:" << endl;
            cin >> b;
        }
        cout << "type C number:" << endl;
        cin >> c;
        while(c == 0){
            cout << "please, only positive:" << endl;
            cin >> c;
        }
    }

    //calculate bisectors and medians
    bisector_1 = (sqrt(a * b * (a + b + c) * (a + b - c)))/(a + b);
    bisector_2 = (sqrt(a * c * (a + c + b) * (a + c - b)))/(a + c);
    bisector_3 = (sqrt(c * b * (c + b + a) * (c + b - a)))/(c + b);

    median_1 = (sqrt(2 * a * a + 2 * b * b - c * c))/2;
    median_2 = (sqrt(2 * c * c + 2 * a * a - b * b))/2;
    median_3 = (sqrt(2 * c * c + 2 * b * b - a * a))/2;

    //print results of calculating and sides
    cout << "A = " << a << "\nB = " << b << "\nC = " << c <<endl;
    cout.precision(3);
    cout << "bisector 1: " << bisector_1 << ", bisector 2: " << bisector_2 << ", bisector 3: " << bisector_3 << endl;
    cout << "median 1: " << median_1 << ", median 2: " << median_2 << ", median 3: " << median_3 << endl;

    return 0;
}
