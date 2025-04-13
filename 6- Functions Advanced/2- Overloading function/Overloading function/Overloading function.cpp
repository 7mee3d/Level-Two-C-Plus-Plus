// Overloading function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int sum(int a, int b) {
    return a + b; 

}

float sum(float a, float b) {
    return a + b; 
}

float sum(int a, float b) {
    return a + b; 
}+++


int sum(int a, int  b, int c) {
    return a + b + c; 
}
int main()
{
    cout << sum(15, 15) << endl;
    cout << sum(15, 15.5F) << endl;
    cout << sum(15, 15, 15 ) << endl;
    cout << sum(15.5F, 15.6f) << endl;
}

