// CIS 25 Midterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double calculateArea(float, float);
bool isPrime(int);

using namespace std;

int main()
{
    cout << isPrime(11);
}

double calculateArea(float length, float width) {
    return length * width;
}

bool isPrime(int num) {
    for (int i = 2; i < num; i++) { //skips if num is 1 or 2
        if (num % i == 0) {
            return false;         //if it ever divides to whole number, returns false
        }
    }
    if (num > 1) {                //if it gets through loop and num is not 1
        return true;
    }
    return false;                 //for 1 only
}

