// Pointer part two ( type of pointer examples ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main()
{

	/*
   // type one ( regular pointer )  default 

	int a = 10; 
	int* pointerRegular = &a; 
	cout << "The value of variable : " << a << endl; 
	cout << "This is pointer regular : " << pointerRegular << endl; 

	// changes value variable using pointer 

	*pointerRegular = 20; 

	cout << "The new value of variable using changes pointer : " << a << endl; 
	cout << "This is pointer regular after new value  : " << pointerRegular << endl;


	*/





	/*
	
	// the type two pointer ( null pointer ) ( without value ) 


	int a = 10; 

	int* pointerNull = nullptr; 
	int* pointerNull2 = 0; 
	int* pointerNull3 = NULL;

	cout << pointerNull << endl;  // 000000000000000000000 
	cout << pointerNull2 << endl; // 000000000000000000000 
	cout << pointerNull3 << endl; // 000000000000000000000 

	cout << endl; 
	
	if (pointerNull == nullptr)
		cout << "The pointer is empty of value ): 1";
	if (pointerNull == 0)
		cout << "\nThe pointer is empty of value ): 2";
	if (pointerNull == NULL)
		cout << "\nThe pointer is empty of value ): 3";
	
	*/


	// the type of pointer three ( void pointer ) 

	int a = 10; 

	void* pointerVoid = &a; 
	cout << &a << endl; 
	cout << pointerVoid << endl;  // print address a 


	//int* o = pointerVoid;  // errorr 

	int* pointerConvert = static_cast <int*> (pointerVoid);

	cout << "The Value a = " << a << endl; 
	cout << "The address vairable x ( using void ) : " << pointerVoid << endl; 
	cout << "The address variable after convert ( void pointer to int pointer ) : " << pointerConvert << endl; 


	*pointerConvert = 100; // changes value a 

	cout << "The New Value of a using changes pointer : " << a << endl; 



}
