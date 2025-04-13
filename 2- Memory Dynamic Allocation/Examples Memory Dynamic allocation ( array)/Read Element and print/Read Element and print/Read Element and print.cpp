// Read Element and print.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int* storeElementsArray(int* arr, int size) {

    for (int i = 0; i < size; i++) {
        cin >> *(arr + i); 
    } 

    return arr; 

}

void printArray(int* arr, int size) {

    for (int i = 0; i < size;i++)
        cout << *(arr + i) << endl; 
}
int main()
{
    int sizeArray{};
    cout << "Enter the Size Of Array : ";
    cin >> sizeArray; 

    int* ArrayDynamic = new int[sizeArray];

    storeElementsArray(ArrayDynamic, sizeArray); 

    printArray(ArrayDynamic, sizeArray); 
         
}

