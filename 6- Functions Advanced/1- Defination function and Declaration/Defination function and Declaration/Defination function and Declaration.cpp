// Defination function and Declaration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

// Prototype function ( signature function ) ( declaration function ) 

int add(int a, int b); 

int main()
{
  //Calling function 
	cout << add(5, 5); 

}


//Defination function ( implintation function ) 

int add(int a, int b) {
	return a + b; 
}