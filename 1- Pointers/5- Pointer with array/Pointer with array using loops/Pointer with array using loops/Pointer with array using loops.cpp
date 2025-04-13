// Pointer with array using loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using  namespace std; 

int readElements(int array[5]) {

    int* pointer = array; 

    for (int i = 0; i < 5; i++) {
        cout << "Enter the Element number [ " << i + 1 << " ] : "; 

        cin >> *(pointer + i);
    }
    return array[5]; 

}

void printarray(int array[5]) {

    int* pointer = array; 

    cout << "\n [ "; 

    for (int i = 0; i < 5; i++)
    {
        cout << *(pointer + i) << " , ";
    }
    cout << " ] "; 
} 
int main()
{
    int array[5]; 

    readElements(array); 
    printarray(array); 
}

