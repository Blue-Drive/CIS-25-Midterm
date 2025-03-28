// part 4 solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void findLargest(int, int, int);
void findLargest2(int, int, int);

int main()
{
    findLargest(51,6,6);    //I tested every combo of larger and smaller and equal numbers
}

void findLargest(int a, int b, int c) {
    if (b > a) {
        if (c > b) {
            cout << "The largest number is " << c << endl;
            return;
        }
        cout << "The largest number is " << b << endl; //and/or c
        return;
    }
    if (c > a) {
        cout << "The largest number is " << c << endl;
        return;
    }
    cout << "The largest number is " << a << endl; //or b or c, all equal
    return;
}















//alternative solution
void findLargest2(int a, int b, int c) {            //alternative solution
    if (!(a == b == c)) {
        if (a > b) {
            if (a > c) {
                cout << "largest number is " << a << endl;
            }
            if (a < c) {
                cout << "largest number is " << c << endl;
            }
            if (a == c) {
                cout << "largest number is " << a << endl;//or c
            }
        }else
        if (b > a) {
            if (b > c) {
                cout << "largest number is " << b << endl;
            }
            if (b < c) {
                cout << "largest number is " << c << endl;
            }
            if (b == c) {
                cout << "largest number is " << b << endl; //or c
            }
        }else
        if (c > a) {
            if (c > b) {
                cout << "largest number is " << c << endl;
            }
            if (c < b) {
                cout << "largest number is " << b << endl;
            }
            if (a == c) {
                cout << "largest number is " << c << endl; //or a
            }
        }else
        if (a > c) {
            if (a > b) {
                cout << "largest number is " << a << endl;
            }
            if (a < b) {
                cout << "largest number is " << b << endl;
            }
            if (a == b) {
                cout << "largest number is " << a << endl; //or b
            }
        }
    }
    else
        cout << "largest number is " << a << endl; // or b or c, all equal
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
