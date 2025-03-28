// part 6 solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    int number = 10;
    if (number == 20) {                     //changed to ==
        cout << "Number is 20" << endl;
    }
    else {
        cout << "Number is not 20" << endl;
    }

    for (int i = 0; i <= 5; i++)        //removed semicolon
        cout << i << endl;
    
    return 0;
}

