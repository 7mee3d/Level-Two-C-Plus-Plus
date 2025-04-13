// Dereferancing pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


int main()
{
    // Dereferancing pointer 


    int number = 10; 

    // int* pointer = number; // error 

    int* pointer = &number; 

    cout << "The value number = " << number << endl; 
    cout << "The Address of number in the momery : " << pointer << endl; 

    cout << endl; 
    

    // Change of the value in the number to value 100  using dereferancing 


    *pointer = 100; 

    cout << "The New value of number = " << number << endl; 
    cout << "Address number in the momery after the dereferancing : " << pointer << endl; 

}
