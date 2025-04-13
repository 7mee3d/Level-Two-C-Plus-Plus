// Call by referance by pointer example two.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

void incrementByPointer(int* number) {

    cout << *number << endl;
    (*number)++;


}
int main()
{
    int a = 0; 
    incrementByPointer(&a);
    incrementByPointer(&a);

}

