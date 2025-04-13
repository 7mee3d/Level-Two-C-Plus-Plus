// Differant Pointer and Referances.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std; 

int main()
{
	int number = 10; 
	int& referances = number; 

	cout <<"The Value of number : " <<  number << endl;
	cout <<"The Vlaue of number using referances = " <<  referances << endl;

	cout << endl; 

	cout << "The Address of number : " << &number << endl; 
	cout << "The Address of number using referances : " << &referances << endl; 

	int number2 = 20; 

//	&referances = number2; // error 

	int* pointer = &number2; 

	cout << pointer << endl; 
	cout << *pointer << endl; 


}

