// Pointer Regular.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


int main()
{
	// type pointer regular ( orginal ) 

	int number = 10;
	int* pointer; 
	pointer = &number; 

	cout << "The aaddress varuiable : " << pointer << endl; 
	cout << "The Value Variable using pointer = " << *&*pointer << endl; 


	/*
		*&*pointer 
		
		*pointer = 10 
		& *pointer = memort address variable 

		*&*pointer = value memory address lasted 
		
		print = 10 
		
		 
		 */
}

