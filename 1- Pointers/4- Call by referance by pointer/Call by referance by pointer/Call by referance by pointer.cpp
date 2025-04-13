// Call by referance by pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

void Swap(int* a, int* b) {

    int temp = 0; 

    temp = *a; 
    *a = *b; 
    *b = temp; 

}

int main()
{
    int number1 = 0, number2 = 0; 

    cout << "Enter the Number 1 : "; 
    cin >> number1; 
    cout << "Enter the number 2 : "; 
    cin >> number2; 

    cout << "\nThe Number 1 Before swapping : " << number1 << endl;
    cout << "The Number 2 Before swapping : " << number2 << endl;

    Swap(&number1, &number2); 

    cout << "\nThe Number 1 after swapping : " << number1 << endl; 
    cout << "The Number 2 after swapping : " << number2 << endl; 


}
