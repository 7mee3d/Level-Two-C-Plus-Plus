// Validation number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int number{}; 

	cout << "Enter the Number Please :"; 
	cin >> number; 

	while (cin.fail()) {

		cin.clear();
		cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');

		cout << "Invalid number , Please enter agian number : ";
		cin >> number; 
	}


	cout << "The NUmber is : " << number; 
 
}

