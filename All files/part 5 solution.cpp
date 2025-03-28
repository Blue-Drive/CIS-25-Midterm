// part 5 solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double calculator(double, char, double);

int main()
{
    double num1;
    double num2;
    char symbol;

    cout << "First number: ";
    cin >> num1;
    cout << "Operator: ";
    cin >> symbol;
    cout << "Second number: ";
    cin >> num2;

    cout << endl << "Result: " << calculator(num1, symbol, num2) << endl;

}

double calculator(double num1, char symbol,double num2) {
    switch(symbol){
        case '+': return num1 + num2;        //does not need break; as execution of function will end with return.
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        default: cout << "Invalid operator\n";
        return 0;
    }
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
