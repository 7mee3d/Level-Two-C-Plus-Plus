// create Dynmic array using MDA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using  namespace std; 

int main()
{

	int sizeArray{};
	cout << "Enter the size of array Dynimcally : "; 
	cin >> sizeArray; 

	int* pointer = new int[sizeArray]; 

	for (int i = 0; i < sizeArray; i++) {
		cout << "Enter the Elements number [ " << i + 1 << " ] : ";
		cin >> *(pointer + i); 
	}


	for ( int i = 0; i < sizeArray; i++)
	{
		cout << *(pointer + i) << '\t'; 
	}
}

