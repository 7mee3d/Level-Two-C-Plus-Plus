// read array  mltiply every element number 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main()
{
    // programm : read element array and print multiply every eleemnt by 2 


    int  array[] = { 0 };

    for (int& i : array) {
        cin >> i; 
    }


    for (int& i : array)
    {
        i *= 2; 
    }

    cout << "After Multiply by w every elements : \n\n"; 

    for (int i : array) {
        cout << i << ' '; 
    }
}
