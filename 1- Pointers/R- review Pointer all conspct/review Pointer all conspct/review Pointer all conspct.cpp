// review Pointer all conspct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


int main()
{
	// Inilization Pointer 

	int number = 10; 

	int* pointer = &number; // Storing meory address ( location ) in the pointer 

	cout << "This is address variable in the memory : " <<  pointer << endl;
	cout << "This is value variable using dereferancing = " << *pointer << endl; 



	// Diffreant referance and Pointer 

	int number2 = 100;
	int number3 = 150; 
	// This is referance ( not store new slot in the memory ) ( Given Value and Memory address this number2 ) 
	int& referanceNumber = number2;


	// error becouse the referance variable not access and changes run-time ( one only change ) 
	//&referanceNumber = number3; 


	// print the number2 value 
	cout << referanceNumber << endl; 



	/*
	* 
	this is variable type(pointer) (create new slot in the meomory
	and storing is the memory address variables only ) 
	to access the memory address variable using referanceing address operator ( & ) 


	-note: take pointer vallue --> give error 

	ex : 
	int* pointer = number2;


	*/


	// create pointer take memory address variable number2 

	int* pointer = & number2; 


	cout << "This is memory address number2 : " << pointer << endl; 

	/*
		--note : to access value varaible by pointer using ( operation DeReferancing operation ) 

			int * pointer = & number2 ; 

			cout << *pointer <<endl;  *pointer ( key to access value varaible ) 

		--note : DeReferancing using change value varaible 

			*pointer = 20 ;
		
		the before change value by pointer = 100 
		after using pointer change value = 20 ; 

		*/

	cout << "This is value varaible using pointer DeReferancing = " << *pointer << endl; 

	//Update Value Varaible Using Pointer 

	*pointer = 20; 

	cout << "This is new value varaible using pointer DeReferancing = " << *pointer << endl;
 





	

}

