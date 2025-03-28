// part 2 solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
	//part 2.1:
	for (int i = 1; i < 51; i++) {
		cout << i << " ";
	}
	cout << endl;

	//_______________________________________________________________________
	//part 2.2:
	int array[10];
	int indexcounter = 0;       //I need to count index somehow
	while (indexcounter < 10) {    
		cout << "Enter integer: ";
		cin >> array[indexcounter];
		indexcounter++;               //prettymuch a verbose for loop
	}
	for (int i = 0; i < 10; i++) {
		cout << array[i] << endl;
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
