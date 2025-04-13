// Exrise 1 - print Decimal number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int readNumberValid(const string message) {
	int number{}; 

	do {

		cout << message; 
		cin >> number; 
		while (cin.fail()) {

			cin.clear();
			cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');

			cout << "Invalid number , try enterd ):";
			cin >> number; 
		}
	} while (number < 0); 

	return number; 

}


int main()
{

	int number = readNumberValid("Enter the Number , Please : "); 

	printf("\n- result enterd the number using user is : %i ", number); 

}

