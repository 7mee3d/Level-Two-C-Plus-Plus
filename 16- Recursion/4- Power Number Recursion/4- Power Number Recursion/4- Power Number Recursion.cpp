// 4- Power Number Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int powerNumber(int base, int expont) {

    if (expont == 0) {
        return 1; 
    }
    else {
        return base * powerNumber(base, expont - 1);
    }
}
int main()
{
    cout << powerNumber(2, 5);
}
